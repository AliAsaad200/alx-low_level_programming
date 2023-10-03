#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* str_concat - integer is positive or negative
* @str: first integer
* Return: 0
*/
 char *str_concat(char *s1, char *s2)
{
	char *p;

	if (s1 == NULL || s2 == NULL)
	{
		return (" ");

	}
	else
	{
		p = malloc(sizeof(char) * strlen(s1 + 1) + strlen(s2 + 1));
		strcat (s1, s2);
		printf ("%s", s1);
		return (p);
	}
}
