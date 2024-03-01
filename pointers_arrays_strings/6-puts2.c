#include <stdio.h>
#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: The string of function
 * return: void
 */
void puts2(char *str)
{
	int length = 0;
	int index = 0;

	while (str[index++])
		length++;
	for (index = 0 ; index < length ; index += 2)
		_putchar(str[index]);
}
