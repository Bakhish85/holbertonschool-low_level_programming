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
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
