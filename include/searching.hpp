#ifndef ALGORITHMS_SEARCHING_H
#define ALGORITHMS_SEARCHING_H

/**
 * @brief Search for the given target in the given array using linear search.
 *
 * The linear search algorithm iterates through each element of the array, comparing it with the target element.
 * If a match is found, the index of the element is returned. If the target is not found, -1 is returned. The time
 * complexity of linear search is O(n), where n is the number of elements in the array.
 *
 * @param arr The array to search through.
 * @param len The length of the given array.
 * @param target The target element you're looking for.
 * @return The zero-based index if found, or -1 if missing.
 */
int linear_search(const char arr[], int len, char target);

/**
 * @brief Search for the given target in the given array using binary search.
 *
 * The binary search algorithm requires the array to be sorted. It repeatedly divides the search interval in half,
 * comparing the target element with the middle element of the interval. If the target matches the middle element,
 * its position in the array is returned. If the target is less than the middle element, the search continues in
 * the lower half of the interval. If the target is greater, the search continues in the upper half. This process
 * repeats until the target is found or the interval is empty. The time complexity of binary search is O(log n),
 * where n is the number of elements in the array.
 *
 * @param arr The array to search through.
 * @param len The length of the given array.
 * @param target The target element you're looking for.
 * @return The zero-based index if found, or -1 if missing.
 */
int binary_search(const char arr[], int len, char target);


#endif //ALGORITHMS_SEARCHING_H
