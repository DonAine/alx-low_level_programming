#include <stdio.h>
/**
 * main - Prints all arguments it receives
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
