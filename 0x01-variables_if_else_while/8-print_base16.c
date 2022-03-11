#include <stdio.h>

/**
 * main - prints the numbers of base 16 in lowercase
 * Return: 0 (Always Success)
 */
int main(void)
{
	int i;
	char ch;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (ch = 'a'; ch <= 'f'; i++)
		putchar(ch);
	putchar('\n');
	return (0);
}
