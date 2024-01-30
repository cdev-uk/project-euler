#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>

int main() {
    uint64_t sum = 0;

    for (uint16_t n = 0; n < 1000; n++) {
        if (n % 3 == 0 || n % 5 == 0) {
            sum += n;
        }
    }

    printf("%" PRIu64 "\n", sum);

    return EXIT_SUCCESS;
}
