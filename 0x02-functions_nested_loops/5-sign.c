#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number input
 * Return: 1 if its +ve 0 if 0 and -1 if -ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
