#include "main.h"
#include <stdio.h>
/**
 * print_array - prints teh elements of an array of integers
 * @a: input array
 * @n: eleents of the array
 * Return: No return
 */
void print_array(int *a, int n)
{
	int t = 0;

	for (; t < n; t++)
	{
		printf("%d", *(a + t));
		if (t != (n - 1))
			printf(", ");
	}
	printf("\n");
}

