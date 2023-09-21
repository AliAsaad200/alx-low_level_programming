#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
* string_toupper - integer is positive or negative
* @s: first integer
* Return: 0
*/

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (islower(s[i]))
		{
			toupper(s[i]);
		}
	}
	return (s);
}
