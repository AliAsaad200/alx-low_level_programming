#include "main.h"
/**
* string_nconcat - integer is positive or negative
* @nmemb: first integer
* @size: first integer
* Return: 0
**/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int len1;
	unsigned int len2;
	unsigned int res;

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
		*p = '\0';
	strncat(p, s2, n);
	return (p);
}