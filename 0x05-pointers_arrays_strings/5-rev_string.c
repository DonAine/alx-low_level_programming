#include "main.h"
/**
 * rev_string - Prints a string in reverse
 * @s: string to be printed
 *
 *
 */

void rev_string(char *s)
{
	int _len = 0, i = 0;
	char tmp;

	while (s[i++])
		_len++;

	for (i = _len - 1; i >= _len / 2; i--)
	{
		tmp = s[i];
		s[i] = s[_len - i - 1];
		s[_len - i - 1] = tmp;
	}
}
