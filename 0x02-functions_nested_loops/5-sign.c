#include "main.h"

/**
 * print_sign - checks if a number is 0 greate than or less than 0
 * @n: number to check
 * Return: 1 and prints + if n is > 0,
 *  0 and prints 0 if n = 0
 *  -1 and prints - if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);

}
