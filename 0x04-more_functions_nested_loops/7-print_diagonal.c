#include "main.h"
/**
 *  print_diagonal - Ptints diagonal lines
 *  @n: number of times to be printed
 *  Return: void
 */
void print_diagonal(int n)
{
	int v, t;

	for (v = 0; v < n; v++)
	{
		for (j = 0; j < v; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (v < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
