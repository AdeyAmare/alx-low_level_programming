#include <stdio.h>

/**
 * main - prints the sum of even fibonaccci numbers that dont
 * exceed 4000000
 * Return: 0 (Always Success)
 */
int main(void)
{
	int i;
	long int j, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; i++)
	{
		if (j < 4000000 && (j % 2) == 0)
			sum += j;
		next = j + k;
		j = k;
		k = next;
	}
	printf("%ld\n", sum);
	return (0);
}
