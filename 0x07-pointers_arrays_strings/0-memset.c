#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address
 * @b: the desired value
 * @n: number of bytes
 * Return: changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
        int v = 0;

        for (; n > 0; v++)
        {
                s[v] = b;
                n--;
        }
        return (s);
}

