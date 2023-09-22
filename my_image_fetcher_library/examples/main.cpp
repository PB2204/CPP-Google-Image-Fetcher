#include <iostream>
#include "google_image_fetcher.h"

int main() {
    GoogleImageFetcher imageFetcher;

    // Demonstrate fetching images and saving them to the "demo_images" directory
    imageFetcher.fetchImages("landscape", "demo_images");

    std::cout << "Images downloaded and saved in the 'demo_images' directory." << std::endl;
    return 0;
}