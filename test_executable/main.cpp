#include <iostream>
#include <string>
#include "BookStoreLib/HttpClient.h"


int main() {
    // Example usage of the library
    auto result = HttpClient::sendHttpGet();
    auto control = result;
    while(*control != '\0')
    {
        std::cout << *control;
        control++;
    }
    free(result);

    return 0;
}
