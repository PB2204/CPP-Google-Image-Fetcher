// #ifndef GOOGLE_IMAGE_FETCHER_H
// #define GOOGLE_IMAGE_FETCHER_H

// #include <string>

// // Declare the WriteCallback function
// size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp);

// class GoogleImageFetcher {
// public:
//     GoogleImageFetcher();
//     void fetchImages(const std::string& query, const std::string& saveFolder);

// private:
//     const std::string apiKey = "AIzaSyDtW6x6vKWgf-MbQFWsLG5nRTYbmh0-eJQ"; // Replace with your API key
//     const std::string cxId = "a5092aef863c54318";     // Replace with your CX ID
//     int imageCount;

//     void downloadAndSaveImage(const std::string& imgUrl, const std::string& imgFilename);
// };

// #endif



#ifndef GOOGLE_IMAGE_FETCHER_H
#define GOOGLE_IMAGE_FETCHER_H

#include <string>

class GoogleImageFetcher {
public:
    GoogleImageFetcher();
    void fetchImages(const std::string& query, const std::string& saveFolder);

private:
    // Declare WriteCallback as a static member function
    static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp);

    const std::string apiKey;
    const std::string cxId;
    int imageCount;

    void downloadAndSaveImage(const std::string& imgUrl, const std::string& imgFilename);
};

#endif