#include <stdlib.h>
#include <stdio.h>

int main() {
    int sequence[] = {1, 1, 2};
    int sum = 0;

    while (sequence[2] < 4000000) {
        // Check if current number is even
        if (sequence[2] % 2 == 0) {
            sum += sequence[2];
        }

        // Move all numbers back one space,
        // then recalculate current number
        sequence[0] = sequence[1];
        sequence[1] = sequence[2];
        sequence[2] = sequence[0] + sequence[1];
    }

    printf("%d\n", sum);

    return EXIT_SUCCESS;
}
