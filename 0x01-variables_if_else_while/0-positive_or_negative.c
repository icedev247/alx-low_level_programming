#include <stdlib.h>
#include <time.h>
/* More headers goes here */
#include <stdio.h>
/**
 * main -  It prints either positive, negtaive or zero based on n
 *
 * Return: (0)
 */

/* betty style doc for function main goes here */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	if (n ==  0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
