#include "main.h"
/**
 * print_triangle - prints a triangle.
 * @size: numbers of lines.
 * Return: no return
 */
void print_triangle(int size)
{
	int v, t;

	for (v = 0; v < size; v++)
	{
		for (t = 0; t < (size - v); t++)
		{
			_putchar(' ');
		}
		for (t--; t < size; t++)
			_putchar(35);
		if (v < size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
