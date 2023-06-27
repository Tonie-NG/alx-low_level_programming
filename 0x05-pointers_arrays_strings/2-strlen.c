#include "main.h"
/**
 * _strlen - Function to return the length of a string
 * @s: String pointer to the string whose length is to be returned
 * Return: Length of string
 */
int _strlen(char *s)
{
	int lenstr = 0;

	while (*s != '\0')
	{
		lenstr++;
		s++;
	}
	return (lenstr);
}
