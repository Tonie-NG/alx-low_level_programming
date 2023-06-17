#include <stdio.h>
/**
 * main - Entry point for number printing
 * Return: 0 (indicates success)
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		print(number);
		number++;
	}
	printf('\n');
	return (0);
}
