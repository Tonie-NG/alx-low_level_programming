#include "main.h"
/**
 * print_alphabet - Function to make the alphabet
 * Return: void
 */
void print_alphabet(void)
{
	char va;

	for (va = 'a'; va <= 'z'; va++)
	{
		_putchar(va);
		_putchar('\n');
	}
}
