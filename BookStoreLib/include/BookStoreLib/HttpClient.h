// HttpClient.h
#ifndef HTTPCLIENT_H
#define HTTPCLIENT_H

#include <string>

static const char *const googleapisURL = "https://www.googleapis.com";
static const char *const path = "/books/v1/volumes?q=ios&maxResults=20&startIndex=0";

class HttpClient {
public:
    static char* sendHttpGet();
};

#endif // HTTPCLIENT_H
