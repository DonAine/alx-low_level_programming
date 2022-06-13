#include "main.h"
/**
 * puts_half - prints the last half of a string
 * @str: String to be printed
 */

void puts_half(char *str)
{
	int i = 0, n;
	int _len = 0;

	while (str[i++])
		_len++;

	if (_len % 2 == 0)
		n = _len / 2;
	else
		n = (_len + 1) / 2;

	for (i = n; i < _len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
