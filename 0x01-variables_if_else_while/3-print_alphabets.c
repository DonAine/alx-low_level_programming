#include <stdio.h>

/**
 * main - prints alphabet in both upper and lowercase
 * Return: Always 0 (Success)
 * @upper - uppercase alphabet variable
 * @lower - lowercase alphabet variable
 */

int main(void)
{
char upper, lower;
upper = 'A';
lower = 'a';
while (lower <= 'z')
{
	putchar(lower);
	lower++;
}
while (upper <= 'Z')
{
	putchar(upper);
	upper++;
}
putchar('\n');
return (0);
}
