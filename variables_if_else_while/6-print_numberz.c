#include <stdio.h>
/**
 * main - the entry point
 *
 * Description: single digits through putvhar function
 *
 * Return: Always 0 success
 */
int main(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar(i + '0');
	}
	putchar("\n");
	return (0);
}

