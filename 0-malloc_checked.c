#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 * Return: A pointer to the allocates memory.
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);
}
