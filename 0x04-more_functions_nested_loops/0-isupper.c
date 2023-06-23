#include "main.h"
/**
 * _isupper - checks for upper case character
 * @c: input character
 * Return: 1 on success or zero otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
