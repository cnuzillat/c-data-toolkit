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

int count_words(const char *s) {
    if (s[0] == '\0') {
        return 0;
    }

    int words = 1;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            words++;
        }
    }

    return words;
}

int streq(const char *a, const char *b);
