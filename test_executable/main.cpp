#include <iostream>
#include <string>
#include "BookStoreLib/HttpClient.h"

int main() {
    // Example usage of the library
    std::string url = "https://www.googleapis.com/books/v1/volumes?q=ios&maxResults=20&startIndex=0";
    auto result = HttpClient::sendHttpGet(url);
    auto control = result;
    while(*control != '\0')
    {
        std::cout << *control;
        control++;
    }

    return 0;
}
