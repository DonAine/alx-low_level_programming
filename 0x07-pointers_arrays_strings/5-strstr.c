#include "main.h"
/**
 * _strstr - Locates a substring in a string
 * @haystack: String to be searched
 * @needle: substring to be located
 *
 * Return: pointer to beginning of substring if found
 *         NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);

		}
		haystack++;
	}
	return ('\0');
}
