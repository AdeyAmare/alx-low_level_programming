#include <stdio.h>

/**
 * main - Entry point prints the size of types on a computer
 *
 * return: zero if success output non zero otherwise
 */
int main(void)
{
	printf("Size of char: %d byte(s)\n", sizeof(char));
	printf("Size of int: %d byte(s)\n", sizeof(int));
	printf("Size of float: %d byte(s)\n", sizeof(float));
	return (0);
}

