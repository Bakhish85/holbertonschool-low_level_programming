#include <stdio.h>
#include "main.h"
/**
 * _puts - The function that writes the string
 * @str: The string to be written
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
		_putchar('\n');
}
