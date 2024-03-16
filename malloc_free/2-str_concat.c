#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings of any size
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 * Return: the two strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int index;
	int concat_index = 0;
	int len = 0;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index] || s2[index]; index++)
		len++;
	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);
	for (index = 0; s1[index]; index++)
		concat_str[concat_index++] = s1[index];
	for (index = 0; s2[index]; index++)
		concat_str[concat_index++] = s2[index];
	return (concat_str);
}
