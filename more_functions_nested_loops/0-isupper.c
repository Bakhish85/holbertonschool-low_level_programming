#include <stdio.h>
#include "main.h"
/**
 * _isupper - Checks if the element is uppercase
 * @c: The element to be checked
 * Return: 1 if c is uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
