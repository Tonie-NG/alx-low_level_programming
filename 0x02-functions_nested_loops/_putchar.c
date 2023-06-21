#include <unistd.h>

/**
 * _putchar - writes the character  c to the stdout
 * @c: This is the character that will be printed
 * Return: 1 (indicates success)
 * If an error occurs, -1 is returned and the appropraite error is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
