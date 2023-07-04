#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: The string to be searched
 * @accept: the prefix to be measured
 * Return: number of bytes in s which include bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int first;

	while (*s)
	{
		for (first = 0; accept[first]; first++)
		{
			if (*s == accept[first])
			{
				bytes++;
				break;
			}
			else if (accept[first + 1] == '\0')
			{
				return (bytes);
			}
		}
		s++;
	}

	return (bytes);
}
