/**
 * @file main.c
 * @author Chloe Nuzillat
 * @date 2026-02-08
 *
 * @brief Demonstration program for the Array and String Utility Toolkit.
 *
 * This file contains a simple test and demonstration harness for the
 * functions provided by array_utils and string_utils. It shows how to
 * use each public function and prints the results to standard output.
 *
 * The purpose of this file is to verify correctness, demonstrate usage,
 * and provide an example entry point for the toolkit.
 */

#include <stdio.h>
#include "array_utils.h"
#include "string_utils.h"


/**
 * @brief Entry point for the utility toolkit demonstration program.
 *
 * This function exercises all public functions from the array_utils
 * and string_utils modules. It demonstrates typical usage patterns,
 * prints intermediate results, and verifies correct behavior.
 *
 * @return int Exit status of the program (0 indicates success).
 */
int main(void) {
    int arr[] = {1, 1, 2, 2, 2, 3, 5, 5, 8};
    int n = 9;

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    compress_duplicates(arr, &n);

    printf("After compress_duplicates: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int min, max;
    double avg;
    stats(arr, n, &min, &max, &avg);

    printf("Stats -> min: %d, max: %d, avg: %.2f\n",
           min, max, avg);

    printf("Is sorted? %s\n",
           is_sorted(arr, n) ? "yes" : "no");

    char text[] = "   this   is   a   test   ";

    printf("\nOriginal string: \"%s\"\n", text);

    normalize_spaces(text);

    printf("After normalize_spaces: \"%s\"\n", text);
    printf("Word count: %d\n", count_words(text));

    printf("streq(\"test\", \"test\"): %d\n",
           streq("test", "test"));
    printf("streq(\"test\", \"best\"): %d\n",
           streq("test", "best"));

    return 0;
}
