#include <stdio.h>

/**
 * main - prints alphets in lowercase
 * Return: 0 for a success
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	printf("\n");
}
