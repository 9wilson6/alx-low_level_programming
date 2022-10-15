#include <stdio.h>

/**
 * main - prints lowercase alphabet except for q and e
 * Return: 0 for successful excution
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	putchar('\n');
	return (0);
}
