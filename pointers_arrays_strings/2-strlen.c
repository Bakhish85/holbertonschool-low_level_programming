#include <stdio.h>
#include "main.h"
/**
 * _strlen -  returns the length of a string
 * @s: The string that we want to know length
 * Return: The length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
