#include <stdio.h>
#include "main.h"
/**
 * _strstr - locate a substring
 * @haystack: the string tı search
 * @needle: the string to find
 * Return: char value
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a +  b] != needle[b])
				break;
			b++;
		}
		if (needle[b] == '\0')
			return (haystack + a);
		a++;
	}
	return ('\0');
}

