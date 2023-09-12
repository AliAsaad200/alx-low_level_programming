#include "main.h"
#include <stdio.h>
/**
 *print_times_table - Entry point
 *@n: The loweer to checked
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int row, col;	 

  if (n > 15 || n < 0) {
    return;
  }
	
  for ( row = 0; row <= n; row++) {
    for (col = 0; col <= n; col++) {
      int result = row * col;
      printf("%d", result);
      if (col < n) {
        printf(",  ");
      }
    }
    printf("\n");
  }
}
