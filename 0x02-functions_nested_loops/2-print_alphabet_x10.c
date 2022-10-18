#include "main.h"

/**
 * print_alphabet_x10 - print small case alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while (i <= 'a')
	{
		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			_putchar('\n');
			ch++;
		}
		i++;
	}
	_putchar('\n');
}
