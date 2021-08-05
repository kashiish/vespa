#include <grpcclient/grpcclient.h>
#include <fbench/client.h>
#include <vespa/vespalib/gtest/gtest.h>

char TEST_QUERY_VECTOR[1024] = "[23.0, 0.0, 0.0, 0.0, 1.0, 5.0, 43.0, 114.0, 3.0, 0.0, 0.0, 0.0, 14.0, 121.0, 120.0, 78.0, 81.0, 4.0, 0.0, 0.0, 31.0, 126.0, 23.0, 18.0, 126.0, 12.0, 0.0, 0.0, 0.0, 1.0, 0.0, 10.0, 0.0, 0.0, 0.0, 0.0, 8.0, 29.0, 96.0, 43.0, 0.0, 0.0, 0.0, 0.0, 1.0, 81.0, 126.0, 44.0, 126.0, 1.0, 0.0, 0.0, 1.0, 45.0, 66.0, 96.0, 126.0, 0.0, 0.0, 0.0, 1.0, 16.0, 12.0, 63.0, 1.0, 2.0, 0.0, 0.0, 11.0, 40.0, 26.0, 0.0, 5.0, 20.0, 28.0, 1.0, 0.0, 17.0, 36.0, 5.0, 126.0, 45.0, 10.0, 1.0, 0.0, 2.0, 12.0, 29.0, 126.0, 6.0, 0.0, 0.0, 2.0, 110.0, 96.0, 46.0, 18.0, 13.0, 0.0, 0.0, 3.0, 5.0, 1.0, 2.0, 29.0, 50.0, 30.0, 7.0, 8.0, 3.0, 0.0, 1.0, 55.0, 24.0, 14.0, 5.0, 9.0, 15.0, 8.0, 10.0, 10.0, 1.0, 0.0, 0.0, 19.0, 79.0, 16.0, 4.0]";

TEST(GrpcClientFetchTest, fetch_request_is_made_successfully)
{
    const char *deployedIndexServerIp = "10.29.2.5:10000";
    const char *deployedIndexId = "sift_deployed";
    GrpcClient *client = new GrpcClient(deployedIndexServerIp, deployedIndexId);
    client->Connect();
    char queryArray[1024];
    strcpy(queryArray, TEST_QUERY_VECTOR);
    auto fetch_status = client->Fetch(queryArray, 0);
    EXPECT_EQ(fetch_status.Ok(), true);
    EXPECT_EQ(fetch_status.RequestStatus(), 0);
    EXPECT_EQ(fetch_status.TotalHitCount(), 10);

}

TEST(GrpcClientFetchTest, fetch_request_returns_correct_num_neighbors) {
    const char *deployedIndexServerIp = "10.29.2.5:10000";
    const char *deployedIndexId = "sift_deployed";
    GrpcClient *client = new GrpcClient(deployedIndexServerIp, deployedIndexId);
    client->SetNumNeighbors(20);
    client->Connect();
    char queryArray[1024];
    strcpy(queryArray, TEST_QUERY_VECTOR);
    auto fetch_status = client->Fetch(queryArray, 0);
    EXPECT_EQ(fetch_status.Ok(), true);
    EXPECT_EQ(fetch_status.RequestStatus(), 0);
    EXPECT_EQ(fetch_status.TotalHitCount(), 20);
}

TEST(GrpcClientFetchTest, fetch_request_fails_due_to_index_id_error)
{
    const char *deployedIndexServerIp = "10.29.2.5:10000";
    const char *deployedIndexId = "nonexistent_index_id";
    GrpcClient *client = new GrpcClient(deployedIndexServerIp, deployedIndexId);
    client->Connect();
    char queryArray[1024];
    strcpy(queryArray, TEST_QUERY_VECTOR);
    auto fetch_status = client->Fetch(queryArray, 0);
    EXPECT_EQ(fetch_status.Ok(), false);
}

GTEST_MAIN_RUN_ALL_TESTS()
