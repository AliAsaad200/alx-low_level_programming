#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp;

	for (alp = 0; alp <= 9 ; alp++)
		putchar(alp);

	putchar(',');

	putchar('\n');
	return (0);
}
