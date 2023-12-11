#include "main.h"
#include <stdio.h>

// Custom entry point
void custom_entry() {
    // Generate winning numbers based on your chosen numbers
    int winning_numbers[] = {9, 8, 10, 24, 75, 9};

    // Print the winning numbers
    printf("Winning numbers: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", winning_numbers[i]);
    }
    printf("\n");
}
