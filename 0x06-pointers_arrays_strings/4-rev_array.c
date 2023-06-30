#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int c;
	int v;

	for (c = 0; c < n--; c++)
	{
		v = a[c];
		a[c] = a[n];
		a[n] = v;
	}
}
