#include <stdio.h>
#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: the array
 * @n: The number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}

