#include "utils.h"
#include <curl/curl.h>
#include <stdio.h>

/*
 * Downloads to given file, uses libcurl
 */

int download(char *url, char *path) {
  CURL *curl = curl_easy_init();
  FILE *wfd = fopen(path, "w");
  if (curl) {
    CURLcode res;
    // Set URL of curl request to char* url param
    curl_easy_setopt(curl, CURLOPT_URL, url);
    // Set output to char* path param
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, wfd);
    // Sets the writefunction to NULL
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, NULL);
    // 0 disable messages
    curl_easy_setopt(curl, CURLOPT_VERBOSE, 0L);
    // Perform the request
    res = curl_easy_perform(curl);
    // Cleanup!
    curl_easy_cleanup(curl);
    return 1;
  }
  return 0;
}
