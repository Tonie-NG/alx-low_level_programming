#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Print all natural numbers within a range
 * @n: Lower limit
 * Return: 0 always
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d", n);
			}
		}
	}
}
