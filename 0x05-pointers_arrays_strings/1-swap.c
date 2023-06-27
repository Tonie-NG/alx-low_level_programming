#include "main.h"
/**
 * swap_int - Swaps the value of two integers
 * @a: First integer
 * @b: second integer
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int v = *a;

	*a = *b;
	*b = v;
}
