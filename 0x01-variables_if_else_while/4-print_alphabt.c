#include <stdio.h>

/**
 * main - prints lowercase alphabet excluding q and e
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
char _low;
for (_low = 'a'; _low <= 'z'; _low++)
{
	if ((_low != 'e') && (_low != 'q'))
	{
		putchar(_low);
	}
}
putchar('\n');
return (0);
}
