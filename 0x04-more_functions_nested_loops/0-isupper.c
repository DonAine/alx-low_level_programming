#include "main.h"

/**
 * _isupper - identifies whether input is uppercase
 * Return: 1 when true and 0 otherwise
 * @c: input variable
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
