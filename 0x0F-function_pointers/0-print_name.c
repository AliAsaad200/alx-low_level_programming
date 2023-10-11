#include "main.h"
/**
 * print_name - prints number of arguments passed
 * @name: tye int argument
 * @f: type char argument of strings
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		exit(EXIT_FAILURE);
	}

	f(name);
}
