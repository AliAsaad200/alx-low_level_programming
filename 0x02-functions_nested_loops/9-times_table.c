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
				if (result > 9)
				{
					_putchar('0' + result / 10);
					_putchar('0' + result % 10);
				}
				else if (i != 0)
				{
					_putchar(' ');
					_putchar('0' + result);
				}
				else
				{
					_putchar('0' + result);
				}
				if (i != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
			_putchar('\n');
}
