#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first variable to swap
 * @b: second variable to swap
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
