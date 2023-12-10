// HttpClient.cpp
#include "HttpClient.h"
#include <curl/curl.h>

size_t HttpClient::WriteCallback(void* contents, size_t size, size_t nmemb, std::string* output) {
    size_t total_size = size * nmemb;
    output->append(static_cast<char*>(contents), total_size);
    return total_size;
}

std::string HttpClient::sendHttpGet(const std::string& url) {
    CURL* curl;
    CURLcode res;

    curl_global_init(CURL_GLOBAL_DEFAULT);

    curl = curl_easy_init();
    if (curl) {
        // Set the URL
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());

        // Set the write callback function to handle the response
        std::string response_data;
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response_data);

        // Perform the HTTP GET request
        res = curl_easy_perform(curl);

        // Check for errors
        if (res != CURLE_OK) {
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
        } else {
            // Display the response
            //std::cout << "HTTP Response:\n" << response_data << std::endl;
            return response_data;
        }

        // Clean up
        curl_easy_cleanup(curl);
    }

    // Global clean up
    curl_global_cleanup();

    return "[]";
}

