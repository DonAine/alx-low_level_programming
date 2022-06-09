#include "main.h"
/**
 * print_diagonal - prints diagonal using character \
 *
 * @n: input variable.
 */

void print_diagonal(int n)
{
	int s;

	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			for (s = 0; s < i; s++)
				_putchar(' ');
			_putchar('\\');
			if (i == n - 1)
				continue;
			_putchar('\n');
		}

	}
	_putchar('\n');
}
