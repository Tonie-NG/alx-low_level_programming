#include "main.h"

/**
 * print_binary - function that converts and int
 * to binary and print it
 * @n: int to be converted
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	_putchar((n & 1) + '0');
}
