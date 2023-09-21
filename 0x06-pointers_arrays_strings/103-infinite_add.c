#include <stdio.h>
/**
* infinite_add - integer is positive or negative
* @n1: first integer
* @n2: first integer
* @r: first integer
* @size_r: first integer
* Return: 0
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int n1_len = 0;
	int n2_len = 0;
	int index = 0;
	int sum = 0;

	while (n1[n1_len] != '\0')
	{
		n1_len++;
	}
	while (n2[n2_len] != '\0')
	{
		n2_len++;
	}
	index = size_r - 1;

	if (n1_len > size_r - 1 || n2_len > size_r - 1)
	{
		return (0);
	}
	r[index] = '\0';
	while (index > 0)
	{
		int num1 = 0;
		int num2 = 0;
	if (n1_len > 0)
	{
		num1 = n1[--n1_len] - '0';
	}
	if (n2_len > 0)
	{
		num2 = n2[--n2_len] - '0';
	}
	sum = num1 + num2 + carry;

	carry = sum / 10;
	r[--index] = (sum % 10) + '0';
	if (n1_len == 0 && n2_len == 0 && carry > 0)
		return (0);
	}
	if (n1_len > 0 || n2_len > 0 || carry > 0 || index != 0)
		return (0);
	return (r);
}
