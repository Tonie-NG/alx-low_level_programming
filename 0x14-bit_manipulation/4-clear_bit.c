#include "main.h"

/**
 * clear_bit - function that sets the value of
 * a bit to 0 at a given index.
 * @n: number to set
 * @index: given index
 * Return: 1 if successful and -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask = ~(1 << index);

	if (index > 63)
		return (-1);
	*n &= bitmask;

	return (1);
}
