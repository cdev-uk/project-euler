#include <stdlib.h>
#include <stdio.h>

int main() {
    int smallest_number = 0;
    const int step = 20;
    const int highest_factor = step - 1;
    const int lowest_factor = (step / 2) + 1;
    const int required_factor_count = (highest_factor - lowest_factor) + 1;

    for (int current_number = step; smallest_number == 0; current_number += step) {
        int current_factor_count = 0;

        for (int current_factor = lowest_factor; current_factor <= highest_factor; current_factor++) {
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
