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
	int i;

	if (nmemb == 0 || size == 0)
	{
		exit(NULL);
	}
	p = malloc(size);
	if(p == NULL)
	{
		exit(NULL);
	}
	for(i = 0; nmemb != NULL; i++)
	{
		p[i] = nmemb;
	}
	return (p);
}