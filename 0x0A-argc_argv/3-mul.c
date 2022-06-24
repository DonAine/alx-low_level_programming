#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments passed to the program
 * @argv: Array of strings
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int pdt, n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	pdt = n1 * n2;
	printf("%d\n", pdt);
	return (0);
}
