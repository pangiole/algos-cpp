
#include <catch2/catch_test_macros.hpp>
#include "searching.hpp"


TEST_CASE("Linear search does find the target element") {
    // 1. set up the test fixture
    constexpr char arr[] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd'};
    constexpr int size = 5;

    // 2. exercise the thing under test
    const int idx = linear_search(arr, size, 'o');

    // 3. verify the actual result matches the expected result
    REQUIRE(idx == 4);

    // 4. tear down the test fixture
}


TEST_CASE("Linear search couldn't find the target element") {
    // 1. set up the test fixture
    constexpr char arr[] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd'};
    constexpr int size = 5;

    // 2. exercise the thing under test
    const int idx = linear_search(arr, size, 'f');

    // 3. verify the actual result matches the expected result
    REQUIRE(idx == -1);

    // 4. tear down the test fixture
}
