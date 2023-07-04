#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: pointer to the pieces to print
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int v, c;

	for (v = 0; v < 8; v++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[v][c]);
		}
		_putchar('\n');
	}
}
