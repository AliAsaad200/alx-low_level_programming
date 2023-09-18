#include "main.h"
#include <stdio.h>
/**
* reset_to_98 - integer is positive or negative
* @n: first integer
* Return: 0
*/

void reset_to_98(int *n)
{
	n = *&n;
	printf("%d", n);

}
