#pragma once

#include <ostream>
#include "match_service.grpc.pb.h"
#include <grpcpp/grpcpp.h>



/**
 * This class implements a gRPC client that may be used to fetch
 * documents from a gRPC server.
 **/
class GrpcClient
{
private:
  GrpcClient(const GrpcClient &);
  GrpcClient &operator=(const GrpcClient &);

protected:

  const std::string     _deployedIndexServerIp;
  const std::string     _deployedIndexId;

  size_t                _bufsize;
  char                  *_buf;
  ssize_t               _bufused;
  ssize_t               _bufpos;

  int                   _totalHitCount;

  unsigned int          _chunkSeq;      // chunk sequence number
  unsigned int          _chunkLeft;     // bytes left of current chunk
  unsigned int          _dataRead;      // total bytes read from URL
  bool                  _dataDone;      // all URL content read ?

  ::google::cloud::aiplatform::container::v1beta1::MatchService::Stub    *_stub; 
  unsigned int          _numNeighbors; // the number of nearest neighbors to return for each query          

  /**
   * Discard all data currently present in the internal buffer.
   **/
  void ResetBuffer()
  {
    _bufpos  = 0;
    _bufused = 0;
  }

public:

  /**
  * Connect to gRPC channel and create MatchService stub.
  *
  **/
  void Connect();

  /**
   * Create a gRPC client that may be used to fetch documents from the
   * given host.
   *
   * @param deployedIndexServerIp the IP address of the server which contains the index you want to fetch documents from.
   * @param deployedIndexId the ID of the index you want to fetch documents from.
   **/
    GrpcClient(const char *deployedIndexServerIp, const char *deployedIndexId);

    /**
    * Disconnect from server and free memory.
    **/
    // ~GrpcClient();

  /**
   * Class that provides status about the executed fetch method.
  **/
  class FetchStatus final
  {
  public:
      /**
       *   Create a status for the executed fetch.
       * @param ok Whether or not the request was successful
       * @param requestStatus The status from the HTTP server.
       * @param totalHitCount The total number of hits.
      **/
      FetchStatus(bool ok, uint32_t requestStatus, int32_t totalHitCount) :
          _ok(ok),
          _requestStatus(requestStatus),
          _totalHitCount(totalHitCount)
      {}
      /**
       * Query if the operation was successful.
       * @return Status of operation.
      **/
      auto Ok() const { return _ok; }
      /**
         Query RPC request status.
         @return RPC request status.
      **/
      auto RequestStatus() const { return _requestStatus; }
      /**
       * Query total hit count. Returns -1 if the total hit count
       * could not be found.
       * @return Total hit count for query. 
      **/
      auto TotalHitCount() const { return _totalHitCount; }
      
  private:
      bool _ok;
      uint32_t _requestStatus;
      int32_t _totalHitCount;
  };
    
  /**
   * High-level method that may be used to fetch a document in a
   * single method call.
   *
   * @return FetchStatus object which can be queried for status.
   * @param content the vector to query
   * @param contentLen length of content in bytes
   **/
  FetchStatus Fetch(char *content = NULL, int contentLen = 0);
};
