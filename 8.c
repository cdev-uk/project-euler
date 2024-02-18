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
    uint64_t largest_product = 0;
    uint64_t current_product = 1;

    while (digits_read < DIGIT_COUNT && (c = getchar()) != EOF) {
        if (isdigit(c)) {
            digits[digits_read] = c - '0';
            digits_read++;
        }
    }

    if (digits_read == DIGIT_COUNT) {
        do {
            // 1. Calculate current product
            current_product = 1;

            for (int d = 0; d < DIGIT_COUNT; d++) {
                // Cast here is fine as a digit will always be unsigned
                current_product *= (uint8_t) digits[d];
            }

            // 2. Update largest product
            if (current_product > largest_product) {
                largest_product = current_product;
            }

            // 3. Get next character
            c = getchar();

            if (c != EOF && isdigit(c)) {
                for (int d = 0; d < DIGIT_COUNT; d++) {
                    digits[d] = digits[d+1];
                }

                digits[DIGIT_COUNT - 1] = c - '0';
            }
        } while (c != EOF);
    }

    printf("%" PRIu64 "\n", largest_product);

    return EXIT_SUCCESS;
}
