#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and states whether it is positive,negative or zero
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%d is zero\n");
	}
	
	else if (n < 0)
	{
		printf("%d is negative\n");
	}

	else
	{
		printf("%d is positive\n");
	}

	return (0);
}
