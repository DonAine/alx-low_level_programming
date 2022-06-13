#include "main.h"
/**
 * _atoi - converts a string to integer
 * @s: string to be converted
 * Return: Integer value of converted string
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int nb = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			nb = (nb * 10) + (*s - '0');
		else if (nb > 0)
			break;
	} while (*s++);
	return (nb * sign);
}
