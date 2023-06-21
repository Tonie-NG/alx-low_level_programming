#include "main.h"
/**
 * print_alphabet_x10 - Makes/Produces the alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char va;

	int i = 0;

	while (i < 10)
	{
		for (va = 'a'; va <= 'z'; va++)
		{
			_putchar(va);
		}
		_putchar('\n');
		i++;
	}
}
