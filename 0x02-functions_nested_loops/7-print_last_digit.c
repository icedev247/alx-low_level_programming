#include "main.h"
/**
 * print_last_digit - prints the last digit
 *
 * Return: last digit's value
 *
 * @q: the input number
 */
int print_last_digit(int q)
{
	int a;

	a = q % 10;
	if (a < 0)
	{
		a = -a;
		_putchar(a + '0');
		return (a);
	}
}
