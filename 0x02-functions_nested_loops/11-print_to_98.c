#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Print all natural numbers within a range
 * @n: Lower limit
 * Return: 0 always
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
