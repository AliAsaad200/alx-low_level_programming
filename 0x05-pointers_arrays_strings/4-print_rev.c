#include "main.h"
#include <stdio.h>
/**
* print_rev - integer is positive or negative
* @s: first integer
* Return: 0
*/
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; --i)
	{
		putchar (s[i]);
	}
	putchar ('\n');
}
