#include <stdio.h>
#include <stdlib.h>

/** main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success) 1(Error)
 */
int main(int argc, char *argv[])
{
	int product, num, num1;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	num1 = atoi(argv[2]);
	product = num * num1;

	printf("%d\n", product);

	return (0);
}
