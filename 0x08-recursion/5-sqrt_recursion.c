#include "main.h"

/**
 * _sqrt - _pow
 * @s: number
 * @r: number
 * Return: 0
 */
int _sqrt(int s, int r)
{
	int Result = r * r;

	if (Result == s)
	{
		return (r);
	}
	else if (Result < s)
	{
		return (_sqrt(s, r + 1));
	}
	else
	{
		return (-1);
	}
}
/**
 * _sqrt_recursion - _pow
 * @n: number
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
