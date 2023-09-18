#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* puts_half - integer is positive or negative
* @str: first integer
* Return: 0
*/
void puts_half(char *str)
{
	int i;
	int len = strlen(str);

	for (i = len / 2; i < len; i++)
	{
		if (i % 3 == 0)
		{
			str[i] = (len - 1) / 2;
			putchar(str[i]);
		}
		else
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
