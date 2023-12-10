// Include the header file for HttpClient
#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include "../BookStoreLib/include/BookStoreLib/HttpClient.h"

class HttpClientTests : public ::testing::Test {
protected:
    void SetUp() override {
        // Optional: Add setup code that will be called before each test
    }

    void TearDown() override {
        // Optional: Add teardown code that will be called after each test
    }
};

TEST_F(HttpClientTests, SendHttpGetSuccess) {
std::string url = "https://www.googleapis.com/books/v1/volumes?q=ios&maxResults=20&startIndex=0";
HttpClient::sendHttpGet(url);

// Add assertions based on the expected behavior of sendHttpGet
// For example, you can check if the response contains expected data
// ASSERT_TRUE(...);
}

TEST_F(HttpClientTests, SendHttpGetFailure) {
std::string url = "https://nonexistent-url";
HttpClient::sendHttpGet(url);

// Add assertions based on the expected behavior of sendHttpGet in case of failure
// For example, you can check if an error message is printed
// ASSERT_TRUE(...);
}

// Add more test cases as needed
