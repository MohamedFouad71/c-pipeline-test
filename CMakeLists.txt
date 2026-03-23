# 1. Minimum version and project name
cmake_minimum_required(VERSION 3.10)
project(ValgrindTestApp VERSION 1.0)

# 2. Set the C++ Standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 3. Create the executable and point to the source files inside the 'src' folder
# If you have more source files (e.g., src/math.cpp), add them to this list separated by spaces!
add_executable(MyApp 
    src/main.c
)

# 4. Tell the compiler where to find your header files
target_include_directories(MyApp PUBLIC include)