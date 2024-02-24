#include "main.h"
#include <stdio.h>
/*
 * print_alphabet_x10 - Print alphabet function
 *
 * Description: Write alphabet ten times
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i++ <= 9)
	{
		for (c = 'a' ; c <= 'z' ; c++)
			_putchar(c);
		_putchar('\n');
	}
}
