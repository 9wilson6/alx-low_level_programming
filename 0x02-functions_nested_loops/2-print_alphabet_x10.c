#include "main.h"

/**
 * print_alphabet_x10 - print small case alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while (i <= 10)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
