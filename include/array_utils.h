/*
 * array_utils.h
 *
 * Utility functions for in-place operations on integer arrays.
 * All functions avoid dynamic memory allocation and operate
 * directly on caller-provided buffers.
 *
 * Author: Chloe Nuzillat
 */

#ifndef ARRAY_UTILS_H
#define ARRAY_UTILS_H


/*
 * Removes all values outside the inclusive range [min, max].
 * Preserves the order of remaining elements and updates size.
 *
 * @param a    input array (modified)
 * @param n    pointer to number of elements (updated)
 * @param min  minimum allowed value
 * @param max  maximum allowed value
 */
void filter_range(int a[], int *n, int min, int max);

/*
 * Removes consecutive duplicate values from a sorted array.
 * The array is modified in place and its logical size is updated.
 *
 * @param a  input array (modified)
 * @param n  pointer to number of elements (updated)
 */
void compress_duplicates(int a[], int *n);

/*
 * Computes the minimum, maximum, and average of an array.
 * Results are returned via output parameters.
 *
 * @param a    input array
 * @param n    number of elements
 * @param min  pointer to minimum value (output)
 * @param max  pointer to maximum value (output)
 * @param avg  pointer to average value (output)
 */
void stats(const int a[], int n, int *min, int *max, double *avg);

/*
 * Determines whether an array is sorted in non-decreasing order.
 *
 * @param a  input array
 * @param n  number of elements
 *
 * @return 1 if sorted, 0 otherwise
 */
int is_sorted(const int a[], int n);

#endif
