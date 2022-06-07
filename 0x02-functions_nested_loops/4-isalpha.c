#include "main.h"
/**
 * _isalpha - is a letter, upper or lowercase
 * @c: input variable
 * Return: 1 if true 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
