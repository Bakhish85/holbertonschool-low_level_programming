#include <stdio.h>
#include "main.h"
/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int a = 0;
	int c;

	while (a < 10)
	{
		for (c = '0' ; c < '15' ; c++)
			_puthcar(c);
	}
	_putchar(a + '0');
	_putchar('\n');
}
