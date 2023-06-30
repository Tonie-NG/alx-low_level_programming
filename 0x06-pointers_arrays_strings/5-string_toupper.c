#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: input string.
 * Return: the pointer to dest.
 */
char *string_toupper(char *s)
{
	int tracker = 0;

	while (*(s + tracker) != '\0')
	{
		if ((*(s + tracker) >= 97) && (*(s + tracker) <= 122))
			*(s + tracker) = *(s + tracker) - 32;
		tracker++;
	}
	return (s);
}
