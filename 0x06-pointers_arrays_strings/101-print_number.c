#include "main.h"
/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int m, d, tracker;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	d = m;
	tracker = 1;

	while (d > 9)
	{
		d /= 10;
		tracker *= 10;
	}

	for (; tracker >= 1; tracker /= 10)
	{
		_putchar(((m / tracker) % 10) + 48);
	}
}

