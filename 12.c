#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define FACTOR_COUNT_TARGET 500

static int count_factors(int factorise) {
    int factor_count = 0;
    int possible_factor = 0;
    int other_factor = 0;
    int upper_bound = (int) floor(sqrt(factorise));

    for (possible_factor = 1; possible_factor <= upper_bound; possible_factor++) {
        if (factorise % possible_factor == 0) {
            factor_count++;

            other_factor = factorise / possible_factor;
            if (other_factor != possible_factor) {
                factor_count++;
            }
        }
    }

    return factor_count;
}

int main() {
    int triangle_number = 0;
    int step = 0;
    bool target_met = false;

    for (triangle_number = 1, step = 2; !target_met; triangle_number += step, step++) {
        if (count_factors(triangle_number) > FACTOR_COUNT_TARGET) {
            target_met = true;
            printf("%d\n", triangle_number);
        }
    }

    return EXIT_SUCCESS;
}
