#include <stdio.h>

/**
 * main - Entry point prints the statement in quotes to the standard error
 *
 * Return: The program returns a one
 */
int main(void)
{
	fwrite("and that piece of art is useful \" - Dora Korpar, 2015-10-19", 39, 1, stderr);
	return (1);

}
