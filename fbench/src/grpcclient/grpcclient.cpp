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
    _dataDone(false)
{
   Connect();
}

ssize_t
GrpcClient::FillBuffer() {
    // _bufused = _socket->read(_buf, _bufsize); // may be -1
    // _bufpos  = 0;
    return _bufused;
}

void
GrpcClient::Connect()
  {
    printf("in connect\n");

    const std::shared_ptr<grpc::Channel> channel (grpc::CreateChannel(_deployedIndexServerIp, grpc::InsecureChannelCredentials()));
    stub = new google::cloud::aiplatform::container::v1beta1::MatchService::Stub(channel);
  }

// ssize_t
// HTTPClient::ContentLengthReader::Read(HTTPClient &client,
//                                       void *buf, size_t len)
// {
//     size_t  fromBuffer = 0;
//     ssize_t res        = 0;
//     ssize_t readLen;
//     ssize_t readRes;

//     if (client._bufused > client._bufpos) { // data in buffer ?
//         fromBuffer = (((size_t)(client._bufused - client._bufpos)) > len) ?
//                      len : client._bufused - client._bufpos;
//         memcpy(buf, client._buf + client._bufpos, fromBuffer);
//         client._bufpos += fromBuffer;
//         client._dataRead += fromBuffer;
//         res = fromBuffer;
//     }
//     if (client._dataRead >= client._contentLength) {
//         client._dataDone = true;
//         return res;
//     }
//     if ((len - fromBuffer) > (len >> 1)) {
//         readLen = (len - fromBuffer
//                    < client._contentLength - client._dataRead) ?
//                   len - fromBuffer : client._contentLength - client._dataRead;
//         assert(readLen > 0);
//         readRes = client._socket->read(static_cast<char *>(buf)
//                                        + fromBuffer, readLen);
//         if (readRes < 0) {
//             client.Close();
//             return -1;
//         }
//         client._dataRead += readRes;
//         res += readRes;
//         if (client._dataRead >= client._contentLength) {
//             client._dataDone = true;
//             return res;
//         }
//         if (readRes == 0) {     // data lost because server closed connection
//             client.Close();
//             return -1;
//         }
//     }
//     return res;
// }

// ssize_t
// HTTPClient::ChunkedReader::Read(HTTPClient &client,
//                                 void *buf, size_t len)
// {
//     size_t  fromBuffer = 0;
//     ssize_t res        = 0;

//     while ((len - res) > (len >> 1)) {
//         if (client._chunkLeft == 0) {
//             if (!client.ReadChunkHeader()) {
//                 client.Close();
//                 return -1;
//             }
//             if (client._dataDone)
//                 return res;
//         }
//         if (client._bufused == client._bufpos) {
//             if (client.FillBuffer() <= 0) {
//                 client.Close();
//                 return -1;
//             }
//         }
//         fromBuffer = ((len - res) < ((size_t)(client._bufused - client._bufpos))) ?
//                      len - res : client._bufused - client._bufpos;
//         fromBuffer = (client._chunkLeft < fromBuffer) ?
//                      client._chunkLeft : fromBuffer;
//         memcpy(static_cast<char *>(buf) + res, client._buf + client._bufpos, fromBuffer);
//         client._bufpos += fromBuffer;
//         client._dataRead += fromBuffer;
//         client._chunkLeft -= fromBuffer;
//         res += fromBuffer;
//     }
//     return res;
// }

// ssize_t
// HTTPClient::Read(void *buf, size_t len)
// {
//     if (!_isOpen)
//         return -1;
//     if (_dataDone)
//         return 0;
//     return _reader->Read(*this, buf, len);
// }

// bool
// HTTPClient::Close()
// {
//     if (!_isOpen)
//         return true;

//     _isOpen = false;
//     return (!_keepAlive
//             || _connectionCloseGiven
//             || !_dataDone
//             || (_httpVersion == 0 && !_keepAliveGiven)) ?
//         (_socket.reset(), true) : true;
// }

// HTTPClient::FetchStatus
// HTTPClient::Fetch(const char *url, std::ostream *file,
//                   bool usePost, const char *content, int contentLen)
// {
//     size_t  buflen   = FETCH_BUFLEN;
//     char    buf[FETCH_BUFLEN];      // NB: ensure big enough thread stack.
//     ssize_t readRes  = 0;
//     ssize_t written  = 0;

//     std::string headerinfo;
//     if (!Open(headerinfo, url, usePost, content, contentLen)) {
//         return FetchStatus(false, _requestStatus, _totalHitCount, 0);
//     }

//     // Write headerinfo
//     if (file) {
//         file->write(headerinfo.c_str(), headerinfo.length());
//         if (file->fail()) {
//             Close();
//             return FetchStatus(false, _requestStatus, _totalHitCount, 0);
//         }
//         file->write("\r\n", 2);
//         // Reset header data.
//     }

//     while((readRes = Read(buf, buflen)) > 0) {
//         if(file != nullptr) {
//             if (!file->write(buf, readRes)) {
//                 Close();
//                 return FetchStatus(false, _requestStatus, _totalHitCount, written);
//             }
//         }
//         written += readRes;
//     }
//     Close();

//     return FetchStatus(_requestStatus == 200 && readRes == 0 && _totalHitCount >= 0,
//                        _requestStatus,
//                        _totalHitCount,
//                        written);
// }