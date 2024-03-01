#include <stdio.h>
#include "main.h"
/**
 * rev_string - The function that reverses the string
 * @s: The string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int length = _strlen(s);
	int i;

	for (i = 0; i <= length / 2; i++)
	{
		int temp = s[i];

		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
	_putchar('\n');
}
