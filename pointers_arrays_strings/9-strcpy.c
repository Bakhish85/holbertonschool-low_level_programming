#include <stdio.h>
#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: Bufffer to copy
 * @src: Source string to copy
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
