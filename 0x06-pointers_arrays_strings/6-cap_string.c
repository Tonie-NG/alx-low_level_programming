#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */
char *cap_string(char *s)
{
	int tracker = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + tracker) >= 97 && *(s + tracker) <= 122)
	{
		*(s + tracker) = *(s + tracker) - 32;
	}
	tracker++;
	while (*(s + tracker) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + tracker) == sep_words[i])
			{
				if ((*(s + (tracker + 1)) >= 97) && (*(s + (tracker + 1)) <= 122))
				{
					*(s + (tracker + 1)) = *(s + (tracker + 1)) - 32;
				}
				break;
			}
		}
		tracker++;
	}
	return (s);
}
