#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 succesful
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	return (0);
}
