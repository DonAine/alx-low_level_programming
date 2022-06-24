#include <stdio.h>
/**
 * main - Prints the number of arguments passed to it
 * @argc: number of arguments passed to the program
 * @argv: Array of strings
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
