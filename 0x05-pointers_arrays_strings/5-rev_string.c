#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* print_rev - integer is positive or negative
* @s: first integer
* Return: 0
*/
void rev_string(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		putchar (s[i]);
	}
	putchar ('\n');
}