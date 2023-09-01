#include "main.h"

/**
 * flip_bits - unction that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: the number of nits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int i = 0;

	while (result)
	{
		i += result & 1;
		result >>= 1;
	}

	return (i);
}
