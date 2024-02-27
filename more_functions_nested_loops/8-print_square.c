#include <stdio.h>
#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size : Shows the size of square
 * Return : void
 */
void print_square(int size)
{
	int i = 0, j;

	if (size > 0)
	{
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
