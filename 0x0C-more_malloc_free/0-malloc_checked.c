#include "main.h"
/**
* malloc_checked - integer is positive or negative
* @b: first integer
* Return: 0
*/
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(sizeof(int) * b);
	if (p == NULL)
	{
		exit(98);

	}
	return (p);
}
