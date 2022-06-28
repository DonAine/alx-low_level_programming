#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a copy of string given as paremeter
 * @str: string to be copied
 *
 * Return: On success, pointer to duplicate string
 *         NULL if str = NULL or insufficient memory available
 *
 */

char *_strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];

	duplicate[len] = '\0';

	return (duplicate);
}
