#include <stdio.h>
/**
 * main - entry point : Reverse alphabets
 *
 * Return: (0)
 *
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
