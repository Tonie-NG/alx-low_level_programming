#include <stdio.h>
/**
 * main - Entry point for Numberz
 * Return: 00 (indicates success)
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar('0' + number);
		number++;
	}
	putchar('\n');
	return (0);
}
