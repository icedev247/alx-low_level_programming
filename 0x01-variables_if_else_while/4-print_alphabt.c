#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints alhabets except e and q
 *
 * Return: (0)
 *
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters != 'e' && letters != 'q')
		{
			printf("%c", letters);
		}
	}
	printf("\n");
	return (0);
}
