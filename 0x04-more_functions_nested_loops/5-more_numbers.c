#include "main.h"
/**
 * more_numbers - Prints numbers between 0 and 14
 * 10 times
 * Return: void
 */
void more_numbers(void)
{
	int v, ch;

	for (v = 0; v < 10; v++)
	{
		for (ch = 0; ch < 15; ch++)
		{
			if (ch >= 10)
			{
				_putchar((ch / 10) + 48);
			}
			_putchar((ch % 10) + 48);
		}
		_putchar('\n');
	}
}
