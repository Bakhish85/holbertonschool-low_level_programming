#include <stdio.h>
#include "main.h"
/**
 * puts_half - Prints the second half of the string
 * @str: The string of the function
 * Return: void
 */
void puts_half(char *str)
{
	int index = 0;
	int length = 0;

	while (str[index++])
		length++;

	if ((length % 2) == 1)
	{
		for (index = (((length - 1) / 2) + 1) ; index <= length; index++)
			_putchar(str[index]);
	}
	else
	{
		for (index = (((length / 2) + 1) ; index <= length; index++)
			_putchar(str[index]);
	}
}

