#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _print_rev_recursion - integer is positive or negative
* @s: first integer
* Return: 0
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	printf("%c", *s);
	}

}
