#include "main.h"

/**
 * binary_to_uint - Function to convert binary number
 * to unsigned integer
 * @b: character that holds the binary
 * Return: the converted number or 0 id b is null or invalid
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = result << 1;
		result += (b[i] - '0');
	}
	return (result);
}
