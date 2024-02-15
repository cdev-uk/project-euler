#include <stdlib.h>
#include <stdio.h>

int main() {
    int sum_squares = 0;
    int square_sum = 0;
    int difference = 0;

    for (int n = 1; n <= 100; n++) {
        sum_squares += n * n;
        square_sum += n;
    }

    square_sum *= square_sum;

    difference = sum_squares > square_sum ? sum_squares - square_sum : square_sum - sum_squares;

    printf("%d\n", difference);

    return EXIT_SUCCESS;
}
