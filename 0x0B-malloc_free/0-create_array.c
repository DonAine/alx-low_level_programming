#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 *                and initializes it with a specific char.
 * @size: size of the array to be initalized
 * @c: special char the array should be initialized with
 *
 * Return: Array initalized if successful
 *         NULL if it fails or size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
