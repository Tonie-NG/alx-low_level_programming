#include "main.h"
/**
 * print_most_numbers - prints numbers between 0 to 9
 * (neither 2 nor 4).
 * Return: void
 */
void print_most_numbers(void)
{
	int vh;

	for (vh = 48; vh < 58; vh++)
	{
		if (vh != 50 && vh != 52)
		{
			_putchar(vh);
		}
		_putchar('\n');
	}
}
