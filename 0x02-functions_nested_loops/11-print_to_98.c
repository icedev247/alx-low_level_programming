#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * followed by a new line.
 * @n: the integer to begin printing from.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
	while (n <= 98)
	{
		printf("%d", n);
		n++;
		if (n != 98)
		{
			putchar(n + '0');
			putchar(',');
			putchar(' ');
		}
	}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			n--;
			if (n != 98)
			{
				putchar(n + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
