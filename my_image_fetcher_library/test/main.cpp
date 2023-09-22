#include <iostream>
#include "google_image_fetcher.h"

int main() {
    GoogleImageFetcher imageFetcher;

    // Test fetching images and saving them to the "test_images" directory
    imageFetcher.fetchImages("cat", "test_images");

    std::cout << "Test complete." << std::endl;
    return 0;
}