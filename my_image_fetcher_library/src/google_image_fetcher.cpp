#include "google_image_fetcher.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <cstdio>
#include <curl/curl.h>

GoogleImageFetcher::GoogleImageFetcher()
    : apiKey("AIzaSyDtW6x6vKWgf-MbQFWsLG5nRTYbmh0-eJQ"), cxId("a5092aef863c54318"), imageCount(1) {}

void GoogleImageFetcher::fetchImages(const std::string &query, const std::string &saveFolder)
{
    // Set up HTTP request using cURL
    std::string apiUrl = "https://www.googleapis.com/customsearch/v1";
    std::string params = "?q=" + query + "&searchType=image&key=" + apiKey + "&cx=" + cxId;
    std::string url = apiUrl + params;

    // Use cURL to fetch the JSON response
    CURL *curl = curl_easy_init();
    if (!curl)
    {
        std::cerr << "Failed to initialize cURL." << std::endl;
        return;
    }

    // Initialize a string to store the JSON response
    std::string response;

    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK)
    {
        std::cerr << "Failed to fetch images: " << curl_easy_strerror(res) << std::endl;
        curl_easy_cleanup(curl);
        return;
    }

    curl_easy_cleanup(curl);

    // Parse JSON response and download images
    try
    {
        // Parse the JSON response as before
        // ...

        // Iterate through image URLs and download them
        // ...
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error parsing JSON response: " << e.what() << std::endl;
    }
}

size_t GoogleImageFetcher::WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
    size_t totalSize = size * nmemb;
    ((std::string *)userp)->append((char *)contents, totalSize);
    return totalSize;
}

void GoogleImageFetcher::downloadAndSaveImage(const std::string &imgUrl, const std::string &imgFilename)
{
    // Use cURL to download the image
    CURL *curl = curl_easy_init();
    if (!curl)
    {
        std::cerr << "Failed to initialize cURL." << std::endl;
        return;
    }

    FILE *imgFile = fopen(imgFilename.c_str(), "wb");
    if (!imgFile)
    {
        std::cerr << "Error opening image file: " << imgFilename << std::endl;
        curl_easy_cleanup(curl);
        return;
    }

    curl_easy_setopt(curl, CURLOPT_URL, imgUrl.c_str());
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, imgFile);
    curl_easy_setopt(curl, CURLOPT_FAILONERROR, 1L);

    CURLcode res = curl_easy_perform(curl);
    fclose(imgFile);

    if (res != CURLE_OK)
    {
        std::cerr << "Failed to download image: " << imgUrl << std::endl;
        remove(imgFilename.c_str()); // Remove the incomplete file
    }
    else
    {
        std::cout << "Downloaded image: " << imgFilename << std::endl;
    }

    curl_easy_cleanup(curl);
}