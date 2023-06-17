#include <stdio.h>
/**
 * main - entry point for task 9
 * Return: 0 (proof of success)
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar('0' + number);
		number++;
		if (number <= 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('$');
	return (0);
}
