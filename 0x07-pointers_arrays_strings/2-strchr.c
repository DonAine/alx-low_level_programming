#include "main.h"
/**
 * _strchr - locates a char c in a string and
 *           returns a pointer to its first occurence
 * @s: The string to be searched
 * @c: The character to be searched for
 *
 * Return: Pointer to occurence of character if found
 *         Null if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
