#include "main.h"
/**
 * _isdigit - checks whether input is a digit
 * Return: 1 (True) 0 (False)
 * @c: holds value to be checked
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
