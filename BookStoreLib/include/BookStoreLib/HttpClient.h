// HttpClient.h
#ifndef HTTPCLIENT_H
#define HTTPCLIENT_H

#include <string>

class HttpClient {
public:
    static size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* output);

    static char* sendHttpGet(const std::string& url);
};

#endif // HTTPCLIENT_H
