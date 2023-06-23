#include "main.h"
/**
 * print_square - Prints square hashes
 * @size: size of the square.
 * Return: void
 */
void print_square(int size)
{
	int v, t;

	for (v = 0; v < size; v++)
	{
		for (t =0; t < size; t++)
		{
			_putchar(35);
		}
		if (v != size -1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
