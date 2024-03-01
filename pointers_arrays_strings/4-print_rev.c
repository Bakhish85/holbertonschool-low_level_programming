#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: The string to be written
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	int *end = s;

	while (*end != '\0')
	{
		length++;
		end++;
	}
	end--;
	while (length > 0)
	{
		_putchar(*end);
		length--;
		end--;
	}
	_putchar('\n');
}
