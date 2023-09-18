#include "main.h"
#include <stdio.h>
/**
* _strlen - integer is positive or negative
* @s: first integer
* Return: 0
*/

int _strlen(char *s)
{
	int len = 0;

	if (s[len] == 0)
	{
		return (len);
	}
	else
	{
		while (s[len] != '\0')
	{
		len++;
	}
	printf("%d\n", len);
	}
	return (0);
}
