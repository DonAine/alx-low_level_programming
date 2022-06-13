#include "main.h"
/**
 * puts2 -  prints every other character of a string
 * @str: string to print
 *
 */

void puts2(char *str)
{
	int i = 0;
	int _len = 0;

	while (str[i++])
		_len++;
	for (i = 0; i < _len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
