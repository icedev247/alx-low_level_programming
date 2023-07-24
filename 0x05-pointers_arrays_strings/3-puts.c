#include "main.h"
/**
 * _puts - a function that prints a string,
 * followed by a newline to stdout.
 * @str: the input
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
