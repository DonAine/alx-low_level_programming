#include "main.h"
/**
 * _strcpy - copies a string pointed to by @src
 * to a buffer pointed to by @dest
 * @dest: buffer to copy the string to
 * @src: the source string to copy
 * Return: dest string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
