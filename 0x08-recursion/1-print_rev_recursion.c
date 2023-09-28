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
	int i = 0;
	int j = 0;
	char temp;

	if (i >= j)
	{
		return;
	}
	temp = s[i];
	s[i] = s[j];
	s[j] = temp;
	i++;
	j--;
}
