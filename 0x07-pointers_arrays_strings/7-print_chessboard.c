#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* print_chessboard - integer is positive or negative
* @a: first integer
* Return: 0
*/

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i], a[j]);
		}
	}
}
