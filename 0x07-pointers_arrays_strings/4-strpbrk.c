#include "main.h"
/**
 * *_strpbrk - a function that searches a string for any of a set of bytes.
 * @s: input
 * @accept: input
 * Return: Always bytes` (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int first;

	while (*s)
	{
		for (first = 0; accept[first]; first++)
		{
			if (*s == accept[first])
				return (s);
		}
		s++;
	}
	return ('\0');
}
