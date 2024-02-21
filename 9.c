#include <stdlib.h>
#include <stdio.h>

#define TARGET_SUM 1000

int main() {
    const int max_a = TARGET_SUM / 3;
    const int max_b = TARGET_SUM / 2;
    const int max_c = TARGET_SUM - 3;

    for (int a = 1; a <= max_a; a++) {
        for (int b = a + 1; b <= max_b; b++) {
            for (int c = b + 1; c <= max_c; c++) {
                if (a + b + c == TARGET_SUM && (a * a) + (b * b) == (c * c)) {
                    printf("%d\n", a * b * c);
                    return EXIT_SUCCESS;
                }
            }
        }
    }

    // No triplet found
    fprintf(stderr, "No triplet found for %d\n", TARGET_SUM);
    return EXIT_FAILURE;
}
