#include "main.h"
/**
 * *_memcpy -  a function that copies memory area.
 * @n: number of function copies
 * @src: bytes from memory area
 * @dest: destination memory area
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int v = 0;

	while (v < n)
	{
		dest[v] = src[v];
		v++;
	}

	return (dest);
}
