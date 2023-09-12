#include <stdio.h>
/**
 * main - 50 fibonacci numbers
 *
 * Return: (0)
 */
int main() {
    int first = 1;
    int second = 2;
    int count = 2;

    printf("%d, %d, ", first, second);

    while (count < 98) {
        int next = first + second;

        printf("%d", next);
        if (count < 97) {
            printf(", ");
        }
        first = second;
        second = next;

        count++;
    }

    printf("\n");

    return 0;
}
