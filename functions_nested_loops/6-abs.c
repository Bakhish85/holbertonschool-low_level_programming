#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer
 * @n: The integer to be checked
 * Return: n if it is positive -n if it is negative
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
