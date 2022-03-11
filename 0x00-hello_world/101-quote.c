#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point prints the statement in quotes to the standard error
 *
 * Return: The program returns a one
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);

}
