#include "main.h"
/**
 * _puts - Prints a string followed by a new line character
 * @str: String to be printed
 * Return: No return value
 */
void _puts(char *str)
{
	int c = 0;

	while (c >= 0)
	{
		if(str[c] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[c]);
		c++;
	}
}
