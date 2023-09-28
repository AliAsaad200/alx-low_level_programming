#include "main.h"

/**
 * sqrt - _pow
 * @s: number
 * @r: number
 * Return: 0
 */
int sqrt(int s, int r)
{
	if ( s % 2 == 0)
	{
		return (1);
	}
	else if (s % s == 0 && s / 1 == 1)
	{
		return (0);
		
	}
	else
	{
		return (Square(s - 1));
	}
}
/**
 * _sqrt_recursion - _pow
 * @n: number
 * Return: 0
 */
int is_prime_number(int n)
{
	return (Square(n, 1));
}
