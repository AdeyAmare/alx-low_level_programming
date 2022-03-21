#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character followed by new line
 * @str: the character to print
 * Return: void
 */
void puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n')
}
