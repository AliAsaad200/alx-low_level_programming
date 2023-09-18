#include "main.h"
#include <stdio.h>
/**
* swap_int - integer is positive or negative
* @a: first integer
* @b: first integer
* Return: 0
*/

void swap_int(int *a, int *b)
{
	*a = *&b;
	*b = *&a;
}
