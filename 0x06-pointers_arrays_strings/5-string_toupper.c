#include "main.h"
/**
 * string_toupper - changes lowercase letters of
 *                  a string to uppercase
 * @s: string to be changed
 * Return: pointer to updated string
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i++])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
