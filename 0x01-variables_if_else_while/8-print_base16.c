#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[16] = "0123456789abcdef";
	char c;
	int i;

	for (i = 0; i < 16; i++)
	{
		c = alp[i];
		putchar(c);

	} putchar('\n');
	return (0);
}
