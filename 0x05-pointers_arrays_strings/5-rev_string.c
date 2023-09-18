#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* rev_string - integer is positive or negative
* @s: first integer
* Return: 0
*/
void rev_string(char *s)
{
	int i;
	int len = strlen(s);
	int temp;

	for (i = len - 1; i >= 0; i--)
	{
		temp = (s[i]);
	}
	putchar ('\n');
	return(temp);
}
