#include <stdio.h>
#include "main.h"
/**
 * rev_string - The function that reverses the string
 * @s: The string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int len = lenfun(s);
	int i;

	for (i = 0; i <= len / 2; i++)
	{
		int temp = s[i];

		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
	_putchar('\n');
}

int lenfun (char *s)
{
	int length = 0;
	char *end = s;
	
	while (*end != '\0')
	{
		length++;
		end++;
	}
        return (length);
}

