#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @n: the number of elements of the array
 * @a: The array
 * Return: void
 */
void print_array(int *a, int n)
{
	int index = 0;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != n - 1)
			printf(", ");
	}
}

