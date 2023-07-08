#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int v;
	int c;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	v = 0;
	while (src[v] != '\0')
	{
		dest[c] = src[v];
		c++;
		v++;
	}
	dest[c] = '\0';
	return (dest);
}
