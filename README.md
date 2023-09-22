# My Image Fetcher Library :: CPP Google Image Fetcher

My Image Fetcher Library is a C++ library that allows you to search for images on Google and download them to your local system. It provides a simple API for querying Google's Custom Search API and saving image results.

## Features

- Search for images on Google using keywords.
- Download and save images to a specified folder.
- Easily integrate image searching and downloading into your C++ applications.

## Prerequisites

Before using the library, you'll need the following:

- CMake (for building the project)
- C++ Compiler (e.g., GCC)
- cURL library (for making HTTP requests)

## Getting Started

### Installation

1. Clone this repository to your local machine:

   ```shell
   git clone https://github.com/pb2204/cpp-google-image-fetcher.git
   cd my-image-fetcher-library
   ```

2. Build the library using CMake:

   ```shell
   mkdir build
   cd build
   cmake ..
   make
   ```

### Usage

1. Include the library in your C++ project:

   ```cpp
   #include "google_image_fetcher.h"
   ```

2. Create an instance of the `GoogleImageFetcher` class:

   ```cpp
   GoogleImageFetcher imageFetcher;
   ```

3. Use the `fetchImages` method to search and download images:

   ```cpp
   imageFetcher.fetchImages("cat", "downloaded_images");
   ```

   This example searches for images of cats and saves them to the "downloaded_images" folder.

## Example

You can find a complete example of using the library in the [examples](/examples) directory.

## Contributing

Contributions are welcome! If you'd like to contribute to this project, please follow these steps:

1. Fork the repository.
2. Create a new branch for your feature or bug fix: `git checkout -b feature/your-feature-name`
3. Make your changes and commit them: `git commit -m "Add your changes"`
4. Push to your branch: `git push origin feature/your-feature-name`
5. Open a pull request on this repository.

Please review the [Contributing Guidelines](CONTRIBUTING.md) for more details.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Thanks to the creators of cURL for the powerful HTTP request library.
- Inspiration from other image-fetching libraries and APIs.

## Contact

If you have any questions, suggestions, or feedback, feel free to reach out to [Pabitra Banerjee](mailto:rockstarpabitra2204@gmail.com).

Happy coding!
```
