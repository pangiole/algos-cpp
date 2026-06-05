
#include <catch2/catch_test_macros.hpp>
#include "searching.hpp"

TEST_CASE("Linear Search") {
    // Arrange common test data
    const char letters[] = {'a', 'b', 'c', 'd', 'e'};
    const int size = 5;

    REQUIRE(linear_search(letters, size, 'c') == 2);
}
