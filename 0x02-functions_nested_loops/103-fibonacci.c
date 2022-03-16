#include <stdio.h>

/**
 * main - prints the sum of even fibonaccci numbers that dont
 * exceed 4000000
 * Return: 0 (Always Success)
 */
int main(void)
{
	long int sum, i, j, k;

	sum = 0;
	i = 1;
	j = 2;

	while (k < 4000000)
	{
		k = i + j;
		if (k % 2 == 0)
			sum += k;
		i = j;
		j = k;
	}
	printf("%ld\n", sum);
	return (0);
}
