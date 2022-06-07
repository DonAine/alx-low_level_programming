#include "main.h"
/**
 * _islower - ascertains if a value is lowercase or not
 * Return: 1(True) and 0(False)
 * @c: input variable for _islower computing
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
