#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: the string to look for a character in
 * @c: the character to be located
 * Return: pointer to the first occurence of c in s or null if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
