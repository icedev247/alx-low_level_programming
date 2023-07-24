#include "main.h"
/**
 * puts_half - prints the second half of a string.
 * @str: input string
 */
void puts_half(char *str)
{
	int a, n, ctr;

	ctr = 0;
	for (a = 0; str[a] != '\0'; a++)
	{
		ctr++;
	}
	n = (ctr / 2);
	if ((ctr % 2) == 1)
	{
		ctr = ((ctr + 1) / 2);
	}
	for (a = n; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
