#include <stdio.h>
/**
 * main - prints 3 digit combinations
 * Return: Always 0 (Success)
 */
int main(void)
{
	int o, p, q;

	for (o = 0; o < 8; o++)
	{
		for (p = o + 1; p < 9; p++)
		{
			for (q = p + 1; q < 10; q++)
			{
				putchar((o % 10) + '0');
				putchar((p % 10) + '0');
				putchar((q % 10) + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
