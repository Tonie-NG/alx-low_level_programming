#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: amount of bytes from src
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int v;

	for (v = 0; v < n && src[v] != '\0'; v++)
	{
		dest[v] = src[v];
	}
	for (; v < n; v++)
	{
		dset[v] = '\0';
	}
	return (dest);
}
