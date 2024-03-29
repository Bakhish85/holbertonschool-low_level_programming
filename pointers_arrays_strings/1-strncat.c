#include <stdio.h>
#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: Destination
 * @src: Source
 * @n: Bytes
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
