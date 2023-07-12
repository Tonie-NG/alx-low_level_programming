#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenatedString;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	concatenatedString = malloc(sizeof(char) * (i + ci + 1));

	if (concatenatedString == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		concatenatedString[i] = s1[i];
		i++;
	}

	while (s2[ci] != '\0')
	{
		concatenatedString[i] = s2[ci];
		i++, ci++;
	}
	concatenatedString[i] = '\0';
	return (concatenatedString);
}
