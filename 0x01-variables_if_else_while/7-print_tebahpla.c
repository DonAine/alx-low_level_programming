#include <stdio.h>
/**
 * main - prints alphabet in reverse
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char lcase = 'z';

	while (lcase >= 'a')
	{
		putchar(lcase);
		lcase--;
	}
putchar('\n');
return (0);
}
