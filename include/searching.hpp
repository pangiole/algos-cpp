//
// Created by paolo on 05/06/2026.
//

#ifndef ALGORITHMS_SEARCHING_H
#define ALGORITHMS_SEARCHING_H

/**
 * @brief Search for the given target in the given array using linear search
 *
 * @param arr The array to search through.
 * @param len The length of the given array.
 * @param target The target element you're looking for.
 * @return The zero-based index if found, or -1 if missing.
 */
int linear_search(const char arr[], int len, char target);

/**
 * @brief Search for the given target in the given array using binary search
 *
 * WARNING: Binary search requires the array to be sorted!
 *
 * @param arr The array to search through.
 * @param len The length of the given array.
 * @param target The target element you're looking for.
 * @return The zero-based index if found, or -1 if missing.
 */
int binary_search(const char arr[], int len, char target);


#endif //ALGORITHMS_SEARCHING_H
