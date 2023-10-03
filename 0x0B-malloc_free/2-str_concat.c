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
	int len1;
	int len2;
	int res;

	if (s1 == NULL || s2 == NULL)
	{
		return ("");

	}
	else
	{
		len1 = strlen(s1 +1);
		len2 = strlen(s2 +1);
		res = len1 + len2;
		p = malloc(sizeof(char) * res);
		strcat (s1, s2);
		printf ("%s", s1);
		return (p);
	}
}
