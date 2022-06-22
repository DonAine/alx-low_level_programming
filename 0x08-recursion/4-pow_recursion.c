#include "main.h"
/**
 * _pow_recursion - Prints the value of x raised to the power y
 * @x: the base
 * @y: the power
 *
 * Return: x raised to the power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y-1));
}
