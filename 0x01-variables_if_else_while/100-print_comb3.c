#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success indicator)
 */
int main(void)
{
	int number1 = 0;
	int number2 = 1;

	while (number1 < 10)
	{
		putchar('0' + number1);
		putchar('0' + number2);

		if (number1 < 9)
		{
			putchar(',');
			putchar(' ');
		}
		number2++;
		if (number2 < 9)
		{
			number1++;
			number2 = number1 + 1;
		}
	}
	putchar('\n');
	return (0);
}
