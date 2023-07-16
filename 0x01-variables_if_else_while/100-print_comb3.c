#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - entry point : Prints two digit combination
 *
 * Return: (0);
 *
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 8; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (!(digit1 == 8 && digit2 == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

