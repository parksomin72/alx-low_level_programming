#include <unistd.h>
/**
 * _putchar - Writes a single character to stdout.
 * @c: The character to be written.
 * Return: On success, returns 1. On error, -1 is returned.
 */
char _putchar(char c)
{
	return (write(1, &c, 1));
}
