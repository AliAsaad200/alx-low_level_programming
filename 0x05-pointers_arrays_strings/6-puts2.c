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
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
