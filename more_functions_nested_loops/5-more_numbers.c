#include <stdio.h>
#include "main.h"
/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int a = 0;
	int b;

	while (a < 10)
	{
		for (b = 0 ; b < 15 ; b++)
			_putchar(b + '0');
	}
	_putchar(a + '0');
	_putchar('\n');
}
