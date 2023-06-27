#include "main.h"
/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: String to be printed
 * Return: No return
 */
void print_rev(char *s)
{
	int c = 0;

	while (c >= 0)
	{
		if (s[c] == '\0')
			break;
		c++;
	}
	for (c--; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
