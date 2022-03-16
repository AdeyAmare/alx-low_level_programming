#include "main.h"

/**
 * _isalpha - checks if character is an alphabet
 * @c: the character to be checked
 * Return: 1 if c is an alphabet 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
