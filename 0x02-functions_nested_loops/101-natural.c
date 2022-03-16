#include <stdio.h>

/**
 * main - prints natural numbers below 1024 that are
 * multiples of 3 or 5 and computes sum
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, sum;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
