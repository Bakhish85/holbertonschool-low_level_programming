#include <stdio.h>
#include "main.h"
/**
 * print_triangle - Prints triangle
 * @size: Shows the size of a trÄiangle
 * Return: void
 */
void print_triangle(int size)
{
	int hash, space;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (space = size - hash; space > 0; space--)
				_putchar(' ');
			for (space = 0; space < hash; space++)
				_putchar('#');
			if (hash == size)
				continue;
			_putchar('\n');
		}
		_putchar('\n');
	}
}
