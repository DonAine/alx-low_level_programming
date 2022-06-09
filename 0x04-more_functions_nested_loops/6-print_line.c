#include "main.h"
/**
 * print_line - draws a line using _
 * @n: number of _ to be printed
 *
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
