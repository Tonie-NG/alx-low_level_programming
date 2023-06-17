#include <stdio.h>
/**
 * main - First contact
 * Return: 0 (success)
 */
int main(void)
{
	int v = 0, j = 1, m = 2;

	while (v <= 7)
	{
		while (j <= 8)
		{
			while (m <= 9)
			{
				putchar('0' + v);
				putchar('0' + j);
				putchar('0' + m);
				if (v != 7 || j != 8 || m != 9)
				{
					putchar(',');
					putchar(' ');
				}
				m++;
			}
			j++;
			m = j + 1;
		}
		v++;
		j = v + 1;
		m = j + 1;
	}
	putchar('\n');
	return (0);
}
