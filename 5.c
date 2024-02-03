#include <stdlib.h>
#include <stdio.h>

int main() {
    int smallest_number = 0;
    const int highest_factor = 20;
    const int lowest_factor = 11;
    const int required_factor_count = 9;

    for (int current_number = highest_factor; smallest_number == 0; current_number += highest_factor) {
        int current_factor_count = 0;

        for (int current_factor = lowest_factor; current_factor < highest_factor; current_factor++) {
            if (current_number % current_factor == 0) {
                current_factor_count++;
            } else {
                break;
            }
        }

        if (current_factor_count == required_factor_count) {
            smallest_number = current_number;
        }
    }

    printf("%d\n", smallest_number);

    return EXIT_SUCCESS;
}
