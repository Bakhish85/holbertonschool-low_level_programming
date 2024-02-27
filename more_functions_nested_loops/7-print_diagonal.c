#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - Prints character '\' character n number of times.
 * @n: Shows the number od '\' character
 * Return: void
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 0 ; a < n; a++)
		{
			for (b = 0 ; b < a ; b++)
				_putchar(' ');
			putchar('\\');
			if (a == n - 1)
				continue;
		}
	}
}

