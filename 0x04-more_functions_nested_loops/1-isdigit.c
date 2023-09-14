#include "main.h"
/**
 * _isdigit - check the code.
 *@c: The loweer to checked
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
