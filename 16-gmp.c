#include <stdlib.h>
#include <stdio.h>
#include <gmp.h>

#include "util/convert.h"

#define BASE 2
#define EXPONENT 1000

int main() {
    char *result_string;
    int sum = 0;
    mpz_t result;
    mpz_init(result);

    mpz_ui_pow_ui(result, BASE, EXPONENT);
    result_string = mpz_get_str(NULL, 10, result);
    sum = sum_str_digits(result_string);

    printf("%d\n", sum);

    return EXIT_SUCCESS;
}
