#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i, j, tens, units;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			tens = j / 10;
			units = j % 10;
			if (j > 9)
			{
				_putchar(tens + '0');
			}
			_putchar(units + '0');
		}
		_putchar('\n');
	}
}
