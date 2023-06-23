#include "main.h"
/**
 *  _isdigit - Checks if parameter is an integer between 0 and 9
 *  @c: input number
 *  Return - 1 on success or 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
