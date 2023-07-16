#include <stdlib.h>
#include <time.h>
/* More codes go here */
#include <stdio.h>
/**
 * main - entry point:  prints the last digits of the number
 *
 * Return: (0)
 *
 */

/* Betty style doc for function ma9n goes there */
int main(void)
{
	int n;
	int lastnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* My code goes here */
	lastnum = n % 10;

	if (lastnum > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastnum);
	}
	else if (lastnum == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastnum);
	}
	else if (lastnum < 6 && lastnum != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnum);
	}
	return (0);
}
