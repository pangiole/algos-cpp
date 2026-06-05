cmake_minimum_required(VERSION 3.15)
project(Algorithms LANGUAGES CXX)

# Enforce C++20 Standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# -------------------------------------------------------------
# 1. Define our static library target named "algos"
# -------------------------------------------------------------
add_library(algos STATIC src/searching.cpp)
target_include_directories(algos PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)


# -------------------------------------------------------------
# 2. Fetch the Catch2 library from GitHub
# -------------------------------------------------------------
include(FetchContent)

FetchContent_Declare(
  Catch2
  URL            https://github.com/catchorg/Catch2/archive/refs/tags/v3.15.0.tar.gz
  DOWNLOAD_EXTRACT_TIMESTAMP TRUE  # ◄— Add this line to quiet the warning safely
)
FetchContent_MakeAvailable(Catch2)


# -------------------------------------------------------------
# 2. Define Your Test Executable
# -------------------------------------------------------------
# Suppose your test files are inside a "tests" directory
add_executable(my_tests
        tests/test_searching.cpp
        tests/main.cpp
)

# -------------------------------------------------------------
# 3. Link Catch2 to Your Test Executable
# -------------------------------------------------------------
# In Catch2 v3, Catch2::Catch2WithMain automatically provides a main() function!
target_link_libraries(my_tests PRIVATE Catch2::Catch2WithMain)
target_link_libraries(my_tests PRIVATE algos)


# -------------------------------------------------------------
# 4. Enable and Register Tests with CTest
# -------------------------------------------------------------
enable_testing()
include(Catch)
catch_discover_tests(my_tests)

# This runs the test executable automatically right after it is successfully compiled/linked
#add_custom_command(
#        TARGET my_tests
#        POST_BUILD
#        COMMAND my_tests
#        COMMENT "🚀 Running unit tests post-build..."
#)