#include "main.h"

/**
 * print_alphabet_x10 - print small case alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i <= 10; i++)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			_putchar('\n');
			ch++;
		}
	}
	_putchar('\n');
}
