#include <stdio.h>
/**
 * main - Program to print the alphabet
 * Return: 0 (Indicates success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
