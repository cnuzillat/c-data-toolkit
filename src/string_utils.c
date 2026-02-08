#include "string_utils.h"

void normalize_spaces(char *s) {
    int read = 0;
    int write = 0;
    int in_space = 1;

    while (s[read] != '\0') {
        if (s[read] != ' ') {
            s[write++] = s[read];
            in_space = 0;
        } else if (!in_space) {
            s[write++] = ' ';
            in_space = 1;
        }
        read++;
    }

    if (write > 0 && s[write - 1] == ' ') {
        write--;
    }

    s[write] = '\0';
}

int count_words(const char *s);

int streq(const char *a, const char *b);
