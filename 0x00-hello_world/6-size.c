#include  <stdio.h>
/**
 * main - A C program that prints the size of various types on the computer it is compiled and run on.
 * Return: 0 (zero indicates success)
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\nSize of an int: %i byte(s)\n", sizeof(char), sizeof(int));
	printf("Size of a long int: %i byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %i byte(s)\nSize of a float: %i byte(s)\n", sizeof(long long int), sizeof(float));

	return (0);
}

