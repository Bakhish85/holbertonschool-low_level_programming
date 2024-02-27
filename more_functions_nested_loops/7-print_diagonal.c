#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - Prints character '\' character n number of times.
 * @n: Shows the number od '\' character
 * Return: void
 */
void print_diagonal(int n)
{
	int slash, space;

	if (n > 0)
	{
		for (slash = 0 ; slash < n; a++)
		{
			for (space = 0 ; space < slash ; b++)
				_putchar(' ');
			_putchar('\\');

			if (slash == n - 1)
				continue;

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

