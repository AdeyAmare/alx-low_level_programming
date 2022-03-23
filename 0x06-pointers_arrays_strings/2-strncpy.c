#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the destination string
 * @src: the source string
 * @n: the amount of bytes from src
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
