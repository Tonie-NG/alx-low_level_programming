#include "main.h"
/**
 * puts2 - Print all characters in a string
 * @str: string to be printed
 * Return: No return
 */
void puts2(char *str)
{
	int c = 0;

	while (c >= 0)
	{
		if(str[c] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
		count++;
	}
}
