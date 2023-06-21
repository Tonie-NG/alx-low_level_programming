#include "main.h"
/**
 * print_sign - Prints the polarity of a number
 * @n: The numbe rto be checked
 * Return: 1 for +ve, -1 for -ve and 0 for anything else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
