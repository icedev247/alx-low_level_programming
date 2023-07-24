#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted.
 * Return: the converted string.
 */
int _atoi(char *s)
{
	int i, d, n, len, digit;

	i = 0;
	d = 0;
	n = 0;
	len = p;
	f = 0;
	digit = 0;
	while (s[len] != '\0')
	{
		if (s[i] == '-')
		{
			++d;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
			{
				digit = -digit;
			}
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
			f = 0;
		}
		i++;
	}
	if (f == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}