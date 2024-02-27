#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Checks if the element is digit
 * @c: The element to be checked
 * Return: 1 if c is digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

