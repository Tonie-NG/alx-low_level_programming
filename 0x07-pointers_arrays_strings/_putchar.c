#include <unistd.h>

/**
 * _putchar - writes the cahracter c to stdout
 * @c: Character to print
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
