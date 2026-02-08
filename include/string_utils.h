/*
 * string_utils.h
 *
 * Utility functions for basic string manipulation.
 * All functions operate directly on null-terminated C strings
 * and do not allocate dynamic memory.
 *
 * Author: Chloe Nuzillat
 */

#ifndef STRING_UTILS_H
#define STRING_UTILS_H

/*
 * Normalizes whitespace in a string by:
 *  - Removing leading and trailing spaces
 *  - Replacing consecutive spaces with a single space
 *
 * The string is modified in place.
 *
 * @param s  input string to normalize (modified)
 */
void normalize_spaces(char *s);

/*
 * Counts the number of words in a string.
 * A word is defined as a sequence of non-space characters.
 *
 * @param s  input string
 *
 * @return number of words in the string
 */
int count_words(const char *s);

/*
 * Compares two strings for equality.
 *
 * @param a  first string
 * @param b  second string
 *
 * @return 1 if the strings are equal, 0 otherwise
 */
int streq(const char *a, const char *b);

#endif STRING_UTILS_H
