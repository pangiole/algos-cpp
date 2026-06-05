#include <iostream>

#include "searching.hpp"

int main() {
    constexpr char arr[] = {'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd'};
    constexpr char target = 'o';
    const int idx = linear_search(arr, 10, target);
    std::cout << "Found '" << target << "' at index: " << idx << std::endl;
    return 0;
}
