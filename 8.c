#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdint.h>
#include <inttypes.h>

#define DIGIT_COUNT 13

int main() {
    int digits[DIGIT_COUNT];
    int digits_read = 0;
    int c = 0;
    int64_t largest_product = 0;
    int64_t current_product = 1;

    while (digits_read < DIGIT_COUNT && (c = getchar()) != EOF) {
        if (isdigit(c)) {
            digits[digits_read] = c - '0';
            digits_read++;
        }
    }

    if (digits_read == DIGIT_COUNT) {
        do {
            // Calculate current product
            current_product = 1;

            for (int d = 0; d < DIGIT_COUNT; d++) {
                current_product *= digits[d];
            }

            if (current_product > largest_product) {
                largest_product = current_product;
            }

            c = getchar();

            if (c != EOF && isdigit(c)) {
                // Move all digits down one space, and
                // add the latest one at the end
                for (int d = 0; d < DIGIT_COUNT; d++) {
                    digits[d] = digits[d+1];
                }

                digits[DIGIT_COUNT - 1] = c - '0';
            }
        } while (c != EOF);
    }

    printf("%" PRIi64 "\n", largest_product);

    return EXIT_SUCCESS;
}
