#include "main.h"
/**
 * print_numbers - Prints numbers from 0 - 9
 * Return: Void
 */
void print_numbers(void)
{
	int vh;

	for(vh = 48; vh < 58; vh++)
	{
		_putchar(vh);
	}
	_putchar('\n');
}
