#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc:: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return : 0 (Always success)
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}
	return (0);
}
