#include <stdio.h>
/**
 * main - prints single digits of base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	while (n < 10)
	{
		putchar((n % 10) + '0');
		n++;
	}
putchar('\n');
return (0);
}
