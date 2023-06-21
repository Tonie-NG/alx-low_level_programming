#include "main.h"
/**
 * _abs - Print absolute value of the integer
 * @c: Number to be checked
 * Return: Absolute value of @c
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_value;

		abs_value = c * -1;
		return (abs_value);
	}
	return (c);
}
