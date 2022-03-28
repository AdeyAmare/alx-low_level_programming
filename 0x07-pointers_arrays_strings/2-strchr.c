#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: the string to look for a character in
 * @c: the character to be located
 * Return: pointer to the first occurence of c in s or null if
 * not found
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s);
		}
		i++;
	}
	if (s[i] == c)
	{
		return (s);
	}
	if (s[i] == 0)
	{
		return (NULL);
	}
}
