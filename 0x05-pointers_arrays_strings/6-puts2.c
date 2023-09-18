#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* puts2 - integer is positive or negative
* @str: first integer
* Return: 0
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
