#include <stdlib.h>

#include <time.h>

/* more headers goes there */

#include <stdio.h>

/**
 * * main - generates a random number everytime it excutes
 * * compares the numbr against 0 and prints the outcome
 * Return: Zero for successful compilation
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
