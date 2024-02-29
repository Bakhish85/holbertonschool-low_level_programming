#include <stdio.h>
#include "main.h"
/**
 * reset_to_98 - updates the value it points to to 98
 *
 * @n : the value which we will use
 *
 * Return: void
 */
void reset_to_98(int *n)
{
	int n;
	*n = &n;
	*n = 98;
}
