#include "main.h"
/**
 * print_times_table - prints n times tables starting with 0
 * @n: value of times table should be printed
 *
 */

void print_times_table(int n)
{
	int i, m, pdt;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (m = 1; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');

				pdt = i * m;

				if (pdt <= 99)
					_putchar(' ');
				if (pdt <= 9)
					_putchar(' ');
				if (pdt >= 100)
				{
					_putchar((pdt / 100) + '0');
					_putchar(((pdt / 10)) % 10 + '0');
				}
				else if (pdt <= 99 && pdt >= 10)
				{
					_putchar((pdt / 10) + '0');
				}
				_putchar((pdt % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
