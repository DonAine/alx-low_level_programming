#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: String to print
 */

void print_rev(char *s)
{
	int _len = 0, i;

	while (s[i++])
		_len++;
	for (i = _len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
