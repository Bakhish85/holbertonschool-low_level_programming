#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Write alphabet reverse
 *
 * Return: Always 0 succes
 */
int main(void)
{
	char c;

	for (c = "z" ; c >= "a" ; c--)
	{
		putchar(c);
	}
	putchar("\n");
	return (0);
}
