#include "main.h"

/**
 * get_bit - function to return index of a number in binary
 * @n: number
 * @index: index to find
 * Return: the number at the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int v;

	v = ((n >> index) & 1);
	return (v);
}
