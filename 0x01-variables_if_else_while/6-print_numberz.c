#include <stdio.h>

/**
 * main - prints all single digits of base 10 with 0 included
 * Return: 0 (Always Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
