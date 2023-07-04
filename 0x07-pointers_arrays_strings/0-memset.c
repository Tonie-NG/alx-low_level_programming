#include "main.h"
/**
 * *_memset -  a function that fills memory with a constant byte
 * @s: memory area to be filled
 * @b: character to copy
 * @n: number of times to copy b
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int v;

	for (v = 0; v < n; v++)
	{
		s[v] = b;
	}
	return (s);
}
