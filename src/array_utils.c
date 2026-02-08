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

void compress_duplicates(int a[], int *n);

void stats(const int a[], int n, int *min, int *max, double *avg);

int is_sorted(const int a[], int n);

int main()
