#include <stdlib.h>
#include <stdio.h>

int main() {
    int factors[] = {
        0,
        1,
        2,
        3,
        4,
        5,
        6,
        7,
        8,
        9,
        10,
        11,
        12,
        13,
        14,
        15,
        16,
        17,
        18,
        19,
        20
    };

    const int highest_factor = 20;
    const int lowest_factor = 11;
    const int required_factor_count = 9;
    int smallest_number = 0;

    for (int current_number = highest_factor; smallest_number == 0; current_number += highest_factor) {
        int factor_count = 0;

        // Increase all factors until they equal or exceed the current number
        for (int current_factor = lowest_factor; current_factor < highest_factor; current_factor++) {
            while (factors[current_factor] < current_number) {
                factors[current_factor] += current_factor;
            }

            if (factors[current_factor] == current_number) {
                factor_count++;
            } else {
                break;
            }
        }

        if (factor_count == required_factor_count) {
            smallest_number = current_number;
        }
    }

    printf("%d\n", smallest_number);

    return EXIT_SUCCESS;
}
