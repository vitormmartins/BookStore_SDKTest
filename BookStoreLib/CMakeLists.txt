add_library(BookStore_SDKTest SHARED
        HttpClient.cpp)

target_link_libraries(BookStore_SDKTest PRIVATE
        nlohmann_json::nlohmann_json)

# Include the directories for libcurl
find_package(CURL REQUIRED)
target_include_directories(BookStore_SDKTest PRIVATE
        include/BookStoreLib
        ${CURL_INCLUDE_DIRS})

target_include_directories(BookStore_SDKTest INTERFACE
    include)

# Link the libcurl library
target_link_libraries(BookStore_SDKTest PRIVATE ${CURL_LIBRARIES})