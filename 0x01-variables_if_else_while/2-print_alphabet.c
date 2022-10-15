#include <stdio.h>

/**
 * main - prints alphets in lowercase
 * Return: 0 for a success
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return(0);
}
