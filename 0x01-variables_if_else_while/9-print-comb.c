#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point : Prints single digits combo
 *
 * Return: (0)
 *
 */
int main(void)
{
	int r;

	for (r = '0'; r <= '9'; r++)
	{
		putchar(r);
		if (r != '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
