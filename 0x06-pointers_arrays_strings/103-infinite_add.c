#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 * Return: the pointer to dest
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int we1, w2, res, lop, cary, sum;

	for (we1 = 0; n1[we1]; we1++)
		;
	for (w2 = 0; n2[w2]; w2++)
		;
	if (we1 > size_r || w2 > size_r)
		return (0);
	cary = 0;
	for (we1 -= 1, w2 -= 1, res = 0; res < size_r - 1; we1--, w2--, res++)
	{
		sum = cary;
		if (we1 >= 0)
			sum += n1[we1] - '0';
		if (w2 >= 0)
			sum += n2[w2] - '0';
		if (we1 < 0 && w2 < 0 && sum == 0)
		{
			break;
		}
		cary = sum / 10;
		r[res] = sum % 10 + '0';
	}
	r[res] = '\0';
	if (we1 >= 0 || w2 >= 0 || cary)
		return (0);
	for (res -= 1, lop = 0; lop < res; res--, lop++)
	{
		cary = r[res];
		r[res] = r[lop];
		r[lop] = cary;
	}
	return (r);
}
