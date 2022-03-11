#include <stdio.h>

/**
 * main - prints the alphabet in lowecase
 * Return: 0 (Always Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch < 'z'; ch++)
		purchar(ch);
	putchar('\n');
	return (0);
}
