#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout.
 * @c: The input character.
 * Return: On success 1,
 * On error, -1 is returned, and errrno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
