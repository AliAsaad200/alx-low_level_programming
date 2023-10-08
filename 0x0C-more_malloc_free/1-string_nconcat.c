#include "main.h"
/**
* string_nconcat - integer is positive or negative
* @s1: first integer
* @s2: first integer
* @n: first integer
* Return: 0
**/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1;
	unsigned int len2;
	unsigned int res;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
		res = len1 + len2;
	}
	else
		res = len1 + n;
	p = malloc(res + 1);
	if (p == NULL)
	{
		exit(98);
	}
	if (s1 != NULL)
		strcpy(p, s1);
	else
	{
		*p = '\0';
	}
	strncat(p, s2, n);
	return (p);
}
