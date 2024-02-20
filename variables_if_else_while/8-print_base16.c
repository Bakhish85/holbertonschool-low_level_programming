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
	int num;
	char letter;

	for (num = 0 ; num <= 9 ; num++)
		putchar((num % 10) + '0');
	for (letter = 'a' ; letter <= 'f' ; letter++)
		putchar(letter);
	putchai('\n');
}
