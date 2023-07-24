#include "main.h"
/**
 * _strlen - prints the length of th string.
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int ctr;

	ctr = 0;
	while (*s != '\0')
	{
		ctr++;
		s++;
	}
	return (ctr);
}
