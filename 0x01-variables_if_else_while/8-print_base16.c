#include <stdio.h>
/**
 * main - prints hexadecimal
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp_16 = 'a';
	int num_16 = 0;

	while (num_16 < 10)
	{
		putchar((num_16 % 10) + '0');                                                                        
		num_16++;                  
	}
	while (alp_16 < 'g')
	{
		putchar(alp_16);
		alp_16++;
	}
putchar('\n');
return (0);
}
