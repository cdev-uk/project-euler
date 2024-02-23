#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#define MAX_START 1000000

static int collatz_length(int start) {
    int length = 1;
    int64_t current = start;

    while (current != 1) {
        if (current % 2 == 0) {
            current = current / 2;
        } else {
            current = (current * 3) + 1;
        }

        length++;
    }

    return length;
}

int main() {
    int current_start = 0;
    int longest_chain = 0;
    int current_chain = 0;
    int longest_chain_start = 0;

    for (current_start = 1; current_start < MAX_START; current_start++) {
        current_chain = collatz_length(current_start);

        if (current_chain > longest_chain) {
            longest_chain = current_chain;
            longest_chain_start = current_start;
        }
    }

    printf("%d\n", longest_chain_start);

    return EXIT_SUCCESS;
}
