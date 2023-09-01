#include "main.h"
/**
 * get_endianness - function that checks the endianness
 * of a machine
 * Return: 1 if Little Endian or 0 if not
 */

int get_endianness(void)
{
	unsigned int n = 1;
	char *byte_ptr = (char *) &in;

	if (*byte_ptr == 1)
		return (1);
	else
		return (0);
	return (0);
}
