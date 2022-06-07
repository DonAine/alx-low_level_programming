#include "main.h"
/**
 * print_last_digit - outputs last digit of a number
 * @num: input variable for number
 * Return: the last digit
 */

int print_last_digit(int num)
{
	int l_d;

	l_d = num % 10;
	if (l_d < 0)
		l_d *= -1;

	_putchar(l_d + '0');
	return (l_d);
}
