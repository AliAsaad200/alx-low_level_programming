#include "main.h"
/**
* string_nconcat - integer is positive or negative
* @s1: first integer
* @s2: first integer
* @n: first integer
* Return: 0
*/char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int len1;
	unsigned int len2;
	int res;

	len1 = (s1 != NULL) ? strlen(s1) : 0;
	len2 = (s2 != NULL) ? strlen(s2) : 0;
	if(n >= len2)
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
        *p = '\0';
	strncat(p, s2, n);
	return (p);
}
