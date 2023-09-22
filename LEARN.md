# Learn My Image Fetcher Library

Welcome to the "Learn" section of My Image Fetcher Library! Here, you'll find everything you need to understand, use, and contribute to the library effectively. Whether you're a beginner or an experienced developer, this documentation will guide you through various aspects of the project.

## Table of Contents

1. [Getting Started](#getting-started)
   - [Installation](#installation)
   - [Basic Usage](#basic-usage)
2. [Documentation](#documentation)
   - [Library Overview](#library-overview)
3. [Contributing](#contributing)
   - [How to Contribute](#how-to-contribute)
   - [Coding Guidelines](#coding-guidelines)
4. [Testing](#testing)
5. [License](#license)

## Getting Started

### Installation

To use My Image Fetcher Library in your project, you'll need to include it as a dependency. Here's how to get started:

#### Step 1: Clone the Repository

```bash
git clone https://github.com/pb2204/cpp-google-image-fetcher.git
```

#### Step 2: Build the Library

Refer to the [README.md](https://github.com/PB2204/CPP-Google-Image-Fetcher/blob/main/README.md) for instructions on building the library.

#### Step 3: Integrate the Library

Integrate the built library into your C++ project by linking against it. Make sure to include the necessary header files and set up your development environment.

### Basic Usage

Once you've integrated the library, you can start using it to fetch images from the web. Here's a basic example:

```cpp
#include <iostream>
#include "google_image_fetcher.h"

int main() {
    GoogleImageFetcher imageFetcher;

    // Fetch images and save them to a directory
    imageFetcher.fetchImages("cat", "images");

    std::cout << "Images fetched successfully." << std::endl;
    return 0;
}
```

For more detailed usage instructions, consult the [API Reference](#api-reference) section below.

## Documentation

### Library Overview

My Image Fetcher Library is designed to simplify the process of fetching images from the web using the Google Custom Search API. It provides a C++ interface for querying images and downloading them to a specified directory.

## Contributing

We welcome contributions from the community to improve and enhance My Image Fetcher Library. If you'd like to get involved, here's how you can contribute:

### How to Contribute

1. Read our [Contributing Guidelines](https://github.com/PB2204/CPP-Google-Image-Fetcher/blob/main/CONTRIBUTING.md) to understand the contribution process.

2. Check the [Issues](https://github.com/PB2204/CPP-Google-Image-Fetcher/issues) page for open tasks and bug reports. You can also propose new features or enhancements.

3. Fork the repository, create a new branch for your work, and submit a pull request.

### Coding Guidelines

Before contributing code, please follow our [Coding Guidelines](https://github.com/PB2204/CPP-Google-Image-Fetcher/blob/main/CONTRIBUTING.md#coding-guidelines) to maintain code consistency and readability.

## Testing

To ensure the library's reliability, we maintain a suite of unit tests. When contributing, please make sure to run and add tests for your changes. Refer to the [Testing](https://github.com/PB2204/CPP-Google-Image-Fetcher/blob/main/CONTRIBUTING.md#testing) section in the contributing guidelines for more information.

## License

My Image Fetcher Library is licensed under the [MIT License](https://github.com/PB2204/CPP-Google-Image-Fetcher/blob/main/LICENSE). By using or contributing to this library, you agree to the terms outlined in the license.

Happy coding and image fetching!