#include "main.h"
/**
 * _strncpy - copies one string pointed to by src to buffer
 *            pointed to by dest while specifying n number of bytes
 * @dest: buffer string storing the string copy
 * @src: pointer to string to copy
 * @n: The maximum number of bytes to copied from src
 * Return: pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_len = 0;

	while (src[i++])
		src_len++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = src_len; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
