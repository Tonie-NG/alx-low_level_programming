#include "main.h"
/**
 * _puts - prints a string
 * @str: string to print
 * Retur: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
