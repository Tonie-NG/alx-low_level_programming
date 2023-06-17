#include <stdio.h>
/**
 * main - Entry point for reverse alphabets
 * Return: 0 (indicates success)
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
