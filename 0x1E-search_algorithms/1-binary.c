#include "search_algos.h"
#include <stdio.h>

void print_array(int *array, size_t low, size_t high);
/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: sorted array to find value in
 * @size: size of the array
 * @value: the value to find
 *
 * Return: the value if found or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;
	int guess;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		print_array(array, low, high + 1);
		mid = (low + high) / 2;
		guess = *(array + mid);

		if (guess == value)
			return (mid);

		if (guess > value)
		{
			high = mid - 1;
		} else
		{
			low = mid + 1;
			continue;
		}
	}

	return (-1);
}

/**
 * print_array - prints an array
 * @array: array to print
 * @low: lower boundary
 * @high: upper boundary
*/
void print_array(int *array, size_t low, size_t high)
{
	while (low < high)
	{
		if (low == high - 1)
			printf("%d", (*(array + low)));
		else
		 printf("%d, ", (*(array + low)));
		low++;
	}
	printf("\n");
}
