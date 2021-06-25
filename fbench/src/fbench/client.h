// Copyright 2017 Yahoo Holdings. Licensed under the terms of the Apache 2.0 license. See LICENSE in the project root.
#pragma once

#include <fstream>
#include <atomic>
#include <thread>
#include <vespa/vespalib/net/crypto_engine.h>

#define FBENCH_DELIMITER "\n[--xxyyzz--FBENCH_MAGIC_DELIMITER--zzyyxx--]\n"


/**
 * This struct contains basic arguments used to control a single client.
 * Each client runs in a separate thread. This struct does not own the
 * strings it references.
**/
struct BaseClientArguments
{
    public:
        /**
         * Sequential number identifying this client.
         **/
        int         _myNum;

        /**
         * The total number of clients controlled by the parent fbench
         * application
         **/
        int         _totNum;

        /**
         * Pattern that combined with the client number will become the name
         * of the file containing the urls this client should request.
         **/
        const char *_filenamePattern;

        /**
         * Pattern that combined with the client number will become the name
         * of the file this client should dump url content to. If this
         * pattern is set to NULL no output file is generated.
         **/
        const char *_outputPattern;

        /**
         * The minimum number of milliseconds between two requests from this
         * client.
         **/
        long        _cycle;

        /**
         * Number of milliseconds to wait before making the first request.
         * This will be different for different clients and helps distribute
         * the requests.
         **/
        long        _delay;

        /**
         * Number of requests that should be made before we start logging
         * response times. This is included so fbench startup slugginess
         * will not affect the benchmark results.
         **/
        int         _ignoreCount;

        /**
         * Minimum number of bytes allowed in a response for a request to be
         * successful. If a response contains fewer bytes than this number,
         * the request will be logged as a failure even if no errors
         * occurred.
         **/
        int         _byteLimit;

        /**
         * Number of times this client is allowed to re-use the urls in the
         * input query file.
         **/
        int         _restartLimit;

        /** Whether we should use POST in requests */
        bool        _usePostMode;

        /** Whether we should use gRPC to make requests */
        bool        _useGrpcMode;


        BaseClientArguments(int myNum, int totNum,
                        const char *filenamePattern,
                        const char *outputPattern,
                        long cycle, long delay,
                        int ignoreCount, int byteLimit,
                        int restartLimit, bool postMode, bool grpcMode)
            : _myNum(myNum),
            _totNum(totNum),
            _filenamePattern(filenamePattern),
            _outputPattern(outputPattern),
            _cycle(cycle),
            _delay(delay),
            _ignoreCount(ignoreCount),
            _byteLimit(byteLimit),
            _restartLimit(restartLimit),
            _usePostMode(postMode),
            _useGrpcMode(grpcMode)
        {
        }

private:
    BaseClientArguments(const BaseClientArguments &);
    BaseClientArguments &operator=(const BaseClientArguments &);
};

/**
 * This struct contains arguments used to control a single HTTP client.
 * Each client runs in a separate thread. This struct do not own the
 * strings it references.
 **/
struct ClientArguments : BaseClientArguments
{
    /**
     * The server the client should fetch urls from.
     **/
    const char *_hostname;

    /**
     * The server port where the webserver is running.
     **/
    int         _port;      
    
    /**
     * Max line size in the input query data. Longer lines than this
     * will be skipped.
     **/
    int         _maxLineSize;

    /**
     * Indicate wether keep-alive connections should be enabled for this
     * client.
     **/
    bool        _keepAlive;
    
    /**
     * Indicate wether POST content should be Base64 decoded before
     * sending it
     **/
    bool        _base64Decode;

    /**
     * Indicate whether to add benchmark data coverage headers
     **/
    bool        _headerBenchmarkdataCoverage;

    uint64_t    _queryfileOffset;
    uint64_t    _queryfileEndOffset;
    bool        _singleQueryFile;
    std::string _queryStringToAppend;
    std::string _extraHeaders;
    std::string _authority;

    ClientArguments(int myNum, int totNum,
                    const char *filenamePattern,
                    const char *outputPattern,
                    const char *hostname, int port,
                    long cycle, long delay,
                    int ignoreCount, int byteLimit,
                    int restartLimit, int maxLineSize,
                    bool keepAlive, bool base64Decode,
                    bool headerBenchmarkdataCoverage,
                    uint64_t queryfileOffset, uint64_t queryfileEndOffset, bool singleQueryFile,
                    const std::string & queryStringToAppend, const std::string & extraHeaders,
                    const std::string &authority, bool postMode, bool grpcMode)
        :  BaseClientArguments(myNum, totNum, filenamePattern,
        outputPattern, cycle, delay, ignoreCount, byteLimit, 
        restartLimit, postMode, grpcMode),
        _hostname(hostname),
          _port(port),
          _maxLineSize(maxLineSize),
          _keepAlive(keepAlive),
          _base64Decode(base64Decode),
          _headerBenchmarkdataCoverage(headerBenchmarkdataCoverage),
          _queryfileOffset(queryfileOffset),
          _queryfileEndOffset(queryfileEndOffset),
          _singleQueryFile(singleQueryFile),
          _queryStringToAppend(queryStringToAppend),
          _extraHeaders(extraHeaders),
          _authority(authority)
    {
    }

private:
    ClientArguments(const ClientArguments &);
    ClientArguments &operator=(const ClientArguments &);
};

/**
 * This struct contains arguments used to control a single gRPC client.
 * Each client runs in a separate thread. This struct do not own the
 * strings it references.
 **/
struct GrpcClientArguments : BaseClientArguments
{
    /**
     * The IP address of the server that contains the index we are searching in.
     **/
    const char *_deployedIndexServerIp;

    /**
     * The id of the index we are searching in.
     **/
    const char *_deployedIndexId;

    GrpcClientArguments(int myNum, int totNum,
                    const char *filenamePattern,
                    const char *outputPattern,
                    long cycle, long delay,
                    int ignoreCount, int byteLimit,
                    int restartLimit, const char *deployedIndexServerIp, 
                    const char *deployedIndexId, bool postMode, bool grpcMode)
        :  BaseClientArguments(myNum, totNum, filenamePattern,
        outputPattern, cycle, delay, ignoreCount, byteLimit, 
        restartLimit, postMode, grpcMode),
        _deployedIndexServerIp(deployedIndexServerIp),
        _deployedIndexId(deployedIndexId)
    {
    }

private:
    GrpcClientArguments(const GrpcClientArguments &);
    GrpcClientArguments &operator=(const GrpcClientArguments &);
};

class Timer;
class HTTPClient;
class FileReader;
struct ClientStatus;


/**
 * This class implements a single test client. The clients are run in
 * separate threads to simulate several simultanious users. The
 * operation of a client is controlled through an instance of the
 * @ref ClientArguments class.
 **/
class Client
{
private:
    std::unique_ptr<ClientArguments> _args;
    std::unique_ptr<GrpcClientArguments> _grpcArgs;
    std::unique_ptr<ClientStatus>    _status;
    std::unique_ptr<Timer>           _reqTimer;
    std::unique_ptr<Timer>           _cycleTimer;
    std::unique_ptr<Timer>           _masterTimer;
    std::unique_ptr<HTTPClient>      _http;
    std::unique_ptr<FileReader>      _reader;
    std::unique_ptr<std::ofstream>   _output;
    int                              _linebufsize;
    char                            *_linebuf;
    std::atomic<bool>                _stop;
    std::atomic<bool>                _done;
    std::thread                      _thread;

    Client(const Client &);
    Client &operator=(const Client &);
    static void runMe(Client * client);
    void run();

public:
    typedef std::unique_ptr<Client> UP;
    /**
     * The client arguments given to this method becomes the
     * responsibility of the client.
     **/
    Client(vespalib::CryptoEngine::SP engine, ClientArguments *args);

     /**
     * The gRPC client arguments given to this method becomes the
     * responsibility of the client.
     **/
    Client(GrpcClientArguments *args);
    
    /**
     * Delete objects owned by this client, including the client arguments.
     **/
    ~Client();

    /**
     * @return A struct containing status info for this client.
     **/
    const ClientStatus & GetStatus() { return *_status; }
    void start();
    void stop();
    bool done();
    void join();
};

