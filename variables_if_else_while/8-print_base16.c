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
	int i;
	char c;

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar((i % 10) + '0');
	}
	for (c = 'a' ; c <= 'f' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
