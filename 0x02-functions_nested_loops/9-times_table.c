#include "main.h"
/**
 *times_table - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i;
	int num;
	int result;

		for (num = 0; num <= 9; num++)
		{
			for (i = 0; i <= 9; i++)
			{
				result = i * num;
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
				_putchar(',');
				_putchar('\n');
			}
		}
}
