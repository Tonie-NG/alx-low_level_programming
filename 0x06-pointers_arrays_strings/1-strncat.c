#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: amount of bytes used from src
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int v;
	int t;

	v = 0;
	while (dest[v] != '\0')
	{
		v++;
	}
	t = 0;
	while (t < n && src[t] != '\0')
	{
		dest[v] = src[t];
		v++;
		t++;
	}
	dest[v] = '\0';
	return (dest);
}
