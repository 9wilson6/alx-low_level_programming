#include <stdio.h>

/**
 *  main - print 0 to 9 seperated by comma
 *  Return: 0 for succesful execution
 */

int main(void)
{
	int n;
	
	for (n = 48; n < 58; n++)
		putchar(n);
		if (n != 57)
			putchar(',');
			putchar(' ');
	putchar('\n');
	return (0);
}
