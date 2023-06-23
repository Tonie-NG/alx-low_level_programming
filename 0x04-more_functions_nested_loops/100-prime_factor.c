#include <stdio.h>
/**
 * main - Entry to teh program
 * Return: 0 always
 */
int main(void)
{
	long int n, vt;

	n = 612852475143;
	for (vt = 2; vt <= n; vt++)
	{
		if (n % vt == 0)
		{
			n /= vt;
			vt--;
		}
	}
	printf("%ld\n", vt);
	return (0);
}
