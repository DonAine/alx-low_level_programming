#include "main.h"
/**
 * _strpbrk - locates the first occurrence in the string s of
 *            any of the bytes in the string accept
 * @s: Pointer to string to be searched
 * @accept: Set of bytes to be searched for
 *
 * Return: Pointer to the matched byte or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
