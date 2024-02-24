#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Returns the value of last digit
 * @n: Tzhe number to be checked
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
