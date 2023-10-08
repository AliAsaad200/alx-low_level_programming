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
	int i;

	len1 = sizeof(char) + 1;
	p = malloc(len1 + n);
	if (p == NULL)
	{
		exit(' ');
	}
	for(i = 0; i < len1; i++)
	{
		p = strncat(s1, s2, n);
	}
	return (p);
}
