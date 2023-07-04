#include "main.h"
/**
 * *_strchr -  a function that locates a character in a string.
 * @s: The string to be searched
 * @c: The character to be located
 * Return: A pointer to the first occurence or null
 */
char *_strchr(char *s, char c)
{
	int first;

	for (first = 0; s[first] >= '\0'; first++)
	{
		if (s[first] == c)
			return (s + first);
	}

	return ('\0');
}
