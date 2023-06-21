#include "main.h"
/**
 * _isalpha - Checks to validate of character is alphabetic
 * @c: The character to be checked
 * Return: 1 for alphabetic character and 0 for others
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
