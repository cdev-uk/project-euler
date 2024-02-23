#pragma once

#include <string.h>

int sum_str_digits(const char *str) {
    int length = strlen(str);
    int sum = 0;
    int i = 0;

    for (i = 0; i < length; i++) {
        char c = str[i];

        if (c >= '0' && c <= '9') {
            sum += (c - '0');
        }
    }

    return sum;
}
