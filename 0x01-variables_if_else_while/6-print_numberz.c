#include <stdio.h>

/**
 *  main - print all single digit numbers between 0 and 10
 *  Return: 0 for succesful compilation
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
