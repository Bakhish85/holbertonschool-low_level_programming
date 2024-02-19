#include <stdio.h>
/**
 * main - The entry point
 *
 * Description: Prints the alphabet in lowercase
 *
 * Return: Always 0 Success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}


