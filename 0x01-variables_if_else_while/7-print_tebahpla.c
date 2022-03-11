#include <stdio.h>

/**
 * main - prints the alphabet lowercase and reversed
 * Return: 0 (Always Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
