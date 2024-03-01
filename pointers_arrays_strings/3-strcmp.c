#include <stdio.h>
#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: The first string
 * @s2: The second string
 * Return: The result of compare
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
