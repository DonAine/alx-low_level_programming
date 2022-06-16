#include "main.h"
/**
 * leet - Encodes a string to 1337.
 * @str: string to be encoded
 * Return: Pointer to encoded string
 */

char *leet(char *str)
{
	int indx1 = 0, indx2;
	char leet[9] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T', '?'};

	while (str[indx1])
	{
		for (indx2 = 0; indx2 < 8; indx2++)
		{
			if (str[indx1] == leet[indx2] || str[indx1] - 32 == leet[indx2])
				str[indx1] = indx2 + '0';
		}
		indx1++;
	}
	return (str);

}
