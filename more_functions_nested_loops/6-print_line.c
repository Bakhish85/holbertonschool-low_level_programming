#include <stdio.h>
#include "main.h"
/**
 * print_line - Draws a _ character n times
 * @n : Shows the number of _ character
 * Return: void
 */
void print_line(int n)
{
	int i, n;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			_putchar('_');
			_putchar('\n');
		}
	}
}
