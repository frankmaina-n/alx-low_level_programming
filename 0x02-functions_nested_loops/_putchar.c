#include <unistd.h>

/**
 * _putchat - writes the character c to stdout
 * @c: The character to print
 * Return: on sucess 1.
 * On error, -1 is returned
 */

int _putchar(char c)
{
	int i;

	i = write(1, &c, 1);
	return (i);
}
