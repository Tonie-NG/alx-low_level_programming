#include "main.h"
/**
 * print_line - prints a straight line n times.
 * @n: number of times
 * Return: void
 */
void print_line(int n)
{
	int v;

	for (v = 0; v < n; v++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
