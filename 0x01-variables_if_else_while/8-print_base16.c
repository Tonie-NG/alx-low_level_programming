#include <stdio.h>
/**
 * main -Entry point hexadecimal numbers
 * Return: 0 (indicates success)
 */
int main(void)
{
	char hexNumber = '0';

	while (hexNumber <= '9')
	{
		putchar(hexNumber);
		hexNumber++;
	}
	hexNumber = 'a';
	while (hexNumber <= 'f')
	{
		putchar(hexNumber);
		hexNumber++;
	}
	putchar('\n');
	return (0);
}
