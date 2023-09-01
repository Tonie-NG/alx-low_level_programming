#include "main.h"

int get_endianness(void)
{
	unsigned int n = 1;
	char *byte_ptr = (char *) & n;

	if (*byte_ptr == 1)
		return (1);
	else
		return (0);
	return (0);
}
