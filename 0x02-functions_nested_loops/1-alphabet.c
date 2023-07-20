#include "main.h"
#include <stdio.h>
/**
 * print_alphabet -  print lowercase alphabets to stdout
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
