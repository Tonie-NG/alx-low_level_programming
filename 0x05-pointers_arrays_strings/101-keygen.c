#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Function to generate key gen
 * Return: 0 always
 */
int main(void)
{
	int v = 0, n = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (n < 2772)
	{
		v = rand() % 128;
		if ((n + v) > 2772)
			break;
		n = n + v;
		printf("%c", v);
	}
	printf("%c\n", (2772 - n));
	return (0);
}

