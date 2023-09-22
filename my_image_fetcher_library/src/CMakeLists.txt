# Define the library target
add_library(my_image_fetcher_library STATIC google_image_fetcher.cpp)

# Include directories for library headers
target_include_directories(my_image_fetcher_library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)