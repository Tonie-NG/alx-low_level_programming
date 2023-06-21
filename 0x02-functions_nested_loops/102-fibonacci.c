#include <stdio.h>
/**
 * main - Entry point
 * Returns: 0 always
 */
int main(void)
{
	int t;
	long int n1, n2, fn;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (t = 0; t < 48; t++)
	{
		fn = n1 + n2;
		printf(", %ld", fn);
		n1 = n2;
		n2 = fn;
	}
	printf("\n");
	return (0);
}
