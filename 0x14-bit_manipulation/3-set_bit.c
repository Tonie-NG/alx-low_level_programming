#include "main.h"

/**
 * set_bit - function to set the value of bit at a
 * specific index to 1
 * @n: integer to be set
 * @index: index to change
 *
 * Return: modified integer or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask = 1 << index;

	if (index > 63)
		return (-1);

	*n |= bitmask;

	return (1);
}
