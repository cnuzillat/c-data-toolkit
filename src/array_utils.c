/*
 * array_utils.c
 *
 * Implementation of utility functions for operating on integer arrays.
 * All functions modify arrays in place and avoid dynamic memory allocation.
 *
 * The utilities include:
 *  - Filtering values by range
 *  - Removing consecutive duplicates from sorted arrays
 *  - Computing basic statistics (min, max, average)
 *  - Checking whether an array is sorted
 *
 * These functions are designed for educational use and to demonstrate
 * core C programming concepts such as pointer manipulation, array traversal,
 * and output parameters.
 *
 * Author: Chloe Nuzillat
 */

#include "array_utils.h"

void filter_range(int a[], int *n, int min, int max) {
  int write = 0;

  for (int read = 0; read < *n; read++) {
    
    if (a[read] >= min && a[read] <= max) {
      a[write] = a[read];
      write++;
    }
  }
  
  *n = write;
}

void compress_duplicates(int a[], int *n) {
  int write = 1;

  for (int read = 1; read < *n; read++) {
    
    if (a[read] != a[read - 1]) {
      a[write] = a[read];
      write++;
    }
  }
  
  *n = write;
}

void stats(const int a[], int n, int *min, int *max, double *avg) {
  if (n != 0) {
    
    int sum = a[0];
    *min = a[0];
    *max = a[0];

    for (int i = 1; i < n; i++) {
      
      if (a[i] < *min) {
        *min = a[i];
      }
      else if (a[i] > *max) {
        *max = a[i];
      }

      sum += a[i];
    }

    *avg = sum / (double) n;
  }
}

int is_sorted(const int a[], int n) {
  int flag = 1;

  for (int i = 0; i < n - 1; i++) {
    
    if (a[i] > a[i + 1]) {
      flag = 0;
      break;
    }
  }

  return flag;
}
