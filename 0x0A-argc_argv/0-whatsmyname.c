#include <stdio.h>
/**
 * main - Prints its name followed by a new line
 * @argc: gives the argument count passed to the program
 * @argv: Array of strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
