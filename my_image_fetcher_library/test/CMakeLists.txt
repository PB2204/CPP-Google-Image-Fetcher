# Define the test target
add_executable(my_image_fetcher_test main.cpp)

# Link the test target with the library
target_link_libraries(my_image_fetcher_test my_image_fetcher_library)