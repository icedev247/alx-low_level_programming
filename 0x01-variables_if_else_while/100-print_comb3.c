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

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a + 1; b < '9'; b++)
		{
			if (b != a)
			{
				putchar(a);
				putchar(b);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
