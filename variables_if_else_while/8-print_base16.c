#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: All the numbers of base 16 in lowercase followed by new line.
 *
 * Return: Always 0 Succes
 */
int main(void)
{
	char c;

	for (c = '0' ; c <= '9' ; c++)
	{
		putchar(c);
	}
	for (c = 'a' ; c <= 'f' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
