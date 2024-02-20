#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Possible combinations of single digit numbers
 *
 * Return: Always 0 success
 */
int main(void)
{
	char c, b;

	for (c = '0' ; c <= '9' ; c++)
	{
		for (b = '0' ; b <= '9' ; b++)
			putchar(b);
		putchar(',')
	}
		putchar(c);
	putchar('\n');
	return (0);
}
