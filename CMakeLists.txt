cmake_minimum_required(VERSION 3.27)
project(BookStore_SDKTest)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

FetchContent_Declare(
        json
        URL
        https://github.com/nlohmann/json/releases/download/v3.11.2/json.tar.xz
)
FetchContent_MakeAvailable(json)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG b796f7d44681514f58a683a3a71ff17c94edb0c1
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

include_directories(
        #cmake-build-debug/_deps/json-src/include
        cmake-build-debug/_deps/googletest-src/googletest/include
        cmake-build-debug/_deps/googletest-src/googlemock/include)

add_subdirectory(BookStoreLib)
add_subdirectory(test_executable)
add_subdirectory(unit_tests)

