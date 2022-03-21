#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the n elements of an array of integers.
 * @a: the input array
 * @n: the elements of the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
