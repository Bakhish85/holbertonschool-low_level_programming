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
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
