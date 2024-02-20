#include <stdio.h>
/**
 * main - the entry point
 *
 * Description: single digits through putchar function
 *
 * Return: Always 0 success
 */
int main(void)
{
	int c;

	for (c = 0 ; c <= 9 ; c++)
	{
		putchar(c + '0');
	}
	putchar("\n");
	return (0);
}
