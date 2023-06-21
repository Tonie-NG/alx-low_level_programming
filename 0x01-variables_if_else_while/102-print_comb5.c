#include <stdio.h>
/**
 * main - First contact
 * Return: 0 (success)
 */
int main(void)
{
	int number1, number2;

	while (number1 <= 99)
	{
		number2 = number1;
		 while (number2 <= 9)
		 {
			 putchar('0' + number1 / 10);
			 putchar('0' + number1 % 10);
			 putchar(' ');
			 putchar('0' + number2 / 10);
			 putchar('0' + number2 % 10);
			 if (number1 != 99 || number2 != 99)
			 {
				  putchar(',');
				  putchar(' ');
			 }
			 number2++;
		 }
		 number1++;
	}
	putchar('\n');
	return (0);
}
