#include <stdio.h>
#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: Resulting string
 * @src: Source string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
