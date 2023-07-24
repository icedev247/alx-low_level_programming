#include "main.h"
/**
 * print_rev - a function that prints a string in reverse,
 * followed by a newline.
 * @s: input
 */
void print_rev(char *s)
{
	int ctr = 0;
	int i;

	while (*s != '\0')
	{
		ctr++;
		s++;
	}
	s--;
	for (i = ctr; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
