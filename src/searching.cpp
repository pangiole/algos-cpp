#include "searching.hpp"

int linear_search(const char arr[], const int len, const char target) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int binary_search(const char arr[], const int len, const char target) {
    // TODO: Implement binary search
    return -1;
}