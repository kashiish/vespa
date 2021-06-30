#pragma once

#include <ostream>
#include "third_party/googleapis/match_service.grpc.pb.h"
#include "third_party/googleapis/match_service.pb.h"
#include <grpcpp/grpcpp.h>
#include <grpc/grpc.h>


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

  ::google::cloud::aiplatform::container::v1beta1::MatchService::Stub    *stub;              

  /**
   * Discard all data currently present in the internal buffer.
   **/
  void ResetBuffer()
  {
    _bufpos  = 0;
    _bufused = 0;
  }

    /**
   * Fill the internal buffer with data from the url we are connected
   * to.
   *
   * @return the number of bytes put into the buffer or -1 on fail.
   **/
  ssize_t FillBuffer();

  /**
   * Return the next byte from the data stream we are reading.
   *
   * @return next byte from the data stream or -1 on EOF/ERROR
   **/
  int ReadByte()
  {
    if (_bufpos == _bufused)
      FillBuffer();
    return (_bufused > _bufpos) ? _buf[_bufpos++] & 0x0ff : -1;
  }

  /**
   * Connect to gRPC channel and create MatchService stub.
   *
   * @return success(true)/failure(false)
   **/
  bool Connect()
  {
    printf("in connect\n");
    const std::shared_ptr< ::grpc::ChannelInterface>& channel = grpc::CreateChannel(_deployedIndexServerIp, grpc::InsecureChannelCredentials());
    stub = new google::cloud::aiplatform::container::v1beta1::MatchService::Stub(channel);
    return true;
  }

//   /**
//    * Read the next line of text from the data stream into 'buf'. If
//    * the line is longer than ('bufsize' - 1), the first ('bufsize' -
//    * 1) bytes will be placed in buf (the rest of the line will be
//    * discarded), and the true length of the line will be returned. The
//    * string placed in buf will be terminated with a null
//    * character. Newline characters will be discarded. A line is
//    * terminated by either '\n', "\r\n" or EOF (EOF - connection
//    * closed)
//    *
//    * @return the actual length of the next line, or -1 if no line was read.
//    * @param buf where to put the line.
//    * @param bufsize the length of buf.
//    **/
//   ssize_t ReadLine(char *buf, size_t bufsize);

  /**
   * Read data from the url we are currently connected to. This method
   * should be called repeatedly until it returns 0 in order to
   * completely read the URL content. If @ref Close is called before
   * all URL content is read the physical connection will be closed
   * even if keepAlive is enabled.
   *
   * @return bytes read or -1 on failure.
   * @param buf where to store the incoming data.
   * @param len length of buf.
   **/
//   ssize_t Read(void *buf, size_t len);
public:

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

//   /**
//    * Class that provides status about the executed fetch method.
//   **/
//   class FetchStatus final
//   {
//   public:
//       /**
//        *   Create a status for the executed fetch.
//        *
//        * @param totalHitCount The total number of hits.
//        * @param resultSize The number of bytes in result.
//       **/
//       FetchStatus(int32_t totalHitCount, int32_t resultSize) :
//           _totalHitCount(totalHitCount),
//           _resultSize(resultSize)
//       {}
//       /**
//        * Query total hit count. Returns -1 if the total hit count
//        * could not be found.
//        * @return Total hit count for query. 
//       **/
//       auto TotalHitCount() const { return _totalHitCount; }
//       /**
//        * Query the number of bytes in the result buffer.
//        * @return Number of bytes in result buffer.
//        **/
//       auto ResultSize() const { return _resultSize; }
      
//   private:
//       int32_t _totalHitCount;
//       int32_t _resultSize;
//   };
    
//   /**
//    * High-level method that may be used to fetch a document in a
//    * single method call and save the content to the given file.
//    *
//    * @return FetchStatus object which can be queried for status.
//    * @param file where to save the fetched document. If this parameter
//    *             is NULL, the content will be read and then discarded.
//    * @param content the vector to query
//    * @param contentLen length of content in bytes
//    **/
//   FetchStatus Fetch(std::ostream *file = NULL,
//                 const char *content = NULL, int contentLen = 0);
};
