#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *vvv;
	int i, t = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	vvv = malloc(sizeof(char) * (i + 1));

	if (vvv == NULL)
		return (NULL);

	for (t = 0; str[t]; t++)
		vvv[t] = str[t];

	return (vvv);
}
