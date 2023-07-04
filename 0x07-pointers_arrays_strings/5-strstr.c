#include "main.h"
/**
 * *_strstr - function that locates a substring.
 * @haystack: The string to be searched
 * @needle: substring to be found
 * Return: pointer to the beginning of the located string or null
 */
char *_strstr(char *haystack, char *needle)
{
	int first;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		first = 0;

		if (haystack[first] == needle[first])
		{
			do {
				if (needle[first + 1] == '\0')
					return (haystack);
				first++;
			} while (haystack[first] == needle[first]);
		}
		haystack++;
	}
	return ('\0');
}
