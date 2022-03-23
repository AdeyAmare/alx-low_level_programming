#include "main.h"

/**
 * _strncat - concatenates n bytes from src to dest string
 * @dest: destination string
 * @src: source string 
 * @n: number of bytes of string to concatenate
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		dest[i] = src[j];
		if (src[i] == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
