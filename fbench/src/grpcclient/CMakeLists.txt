# Copyright 2017 Yahoo Holdings. Licensed under the terms of the Apache 2.0 license. See LICENSE in the project root.

vespa_add_library(fbench_grpcclient STATIC
    SOURCES
    grpcclient.cpp
    match_service.grpc.pb.cc
    match_service.pb.cc
    third_party/googleapis/google/rpc/status.pb.cc
    DEPENDS
    fbench_util
    fastos
    grpc
    grpc++
)