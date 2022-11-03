#include "main.h"

/**
 * is_prime_number - checks if number is prime
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (prime_check(2, n));
}
