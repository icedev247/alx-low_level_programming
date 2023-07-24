#include "main.h"
/**
 * swap_int - The function takes two pointer arguments 
 * and swaps the value of the variables they point to.
 * @a: the first input pointer.
 * @b: the second input pointer argument.
 * Return: a and b;
 */
void swap_int(int *a, int *b)
{
	int i;
	int j;

	i = *a;
	j = *b;
	/* Swaps values */
	*b = i;
	*a = j;
}
