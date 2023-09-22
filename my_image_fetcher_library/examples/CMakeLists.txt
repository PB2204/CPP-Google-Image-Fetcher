# Define an example target
add_executable(my_image_fetcher_example main.cpp)

# Link the example target with the library
target_link_libraries(my_image_fetcher_example my_image_fetcher_library)