#include "main.h"
/**
 * _strspn - searches a string for any of a set of bytes
 * @s: String to be searched
 * @accept: set of bytes to search for
 *
 * Return: Number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				byte++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (byte);
		}
		s++;
	}
	return (byte);
}
