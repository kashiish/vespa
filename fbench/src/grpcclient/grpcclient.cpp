 // Copyright 2017 Yahoo Holdings. Licensed under the terms of the Apache 2.0 license. See LICENSE in the project root.
#include "grpcclient.h"
#include <vespa/vespalib/util/size_literals.h>
#include <cassert>
#include <cstring>

#define FETCH_BUFLEN 5120
#define FIXED_REQ_MAX 25


GrpcClient::GrpcClient(const char *deployedIndexServerIp, const char *deployedIndexId)
    : _deployedIndexServerIp(deployedIndexServerIp),
      _deployedIndexId(deployedIndexId),
    _bufsize(10_Ki),
    _buf(new char[_bufsize]),
    _bufused(0),
    _bufpos(0),
    _totalHitCount(-1),
    _chunkSeq(0),
    _chunkLeft(0),
    _dataRead(0),
    _dataDone(false),
    _numNeighbors(10)
{
}

void
GrpcClient::Connect()
  {

    const std::shared_ptr<grpc::Channel> channel (grpc::CreateChannel(_deployedIndexServerIp, grpc::InsecureChannelCredentials()));
    _stub = new google::cloud::aiplatform::container::v1beta1::MatchService::Stub(channel);

  }

GrpcClient::FetchStatus
GrpcClient::Fetch(char *content, int contentLen)
{
    ::google::cloud::aiplatform::container::v1beta1::MatchRequest request;
    request.set_num_neighbors(_numNeighbors);
    request.set_deployed_index_id(_deployedIndexId);

    char *token = std::strtok(content, "[,]");

    while (token) {
      if(token == "[" || token == "]") {
        continue;
      }

      request.add_float_val((float)strtod(token,NULL));

      token = std::strtok(nullptr, "[,]");
    }

    ::google::cloud::aiplatform::container::v1beta1::MatchResponse response;
    grpc::ClientContext context;

    ::grpc::Status status = _stub->Match(&context, request, &response);

    return FetchStatus(status.error_code() == 0, status.error_code(), response.neighbor_size());
}