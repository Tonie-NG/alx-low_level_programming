#include "main.h"
/**
 * print_diagsums - print the sum of the two diagonals
 * @a: matrix of integers
 * @size: matrix's size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int first, sum1 = 0, sum2 = 0;

	for (first = 0; first < size; first++)
	{
		sum1 += a[first];
		a += size;
	}
	a -= size;
	for (first = 0; first < size; first++)
	{
		sum2 += a[first];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
