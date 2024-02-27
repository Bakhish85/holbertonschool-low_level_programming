#include <stdio.h>
/**
 * main - the entry point
 *
 * Description: Print 1 to 100, multiples of 3 is Fizz,
 * multiples of 5 is Buzz.
 *
 * Return: void
 */
void main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if ((i % 3) == 0)
			putchar('Fizz');
		else if ((i % 5) == 0)
			putchar('Buzz');
		else if ((i % 3) == 0 && (i % 5) == 0);
			putchar('FizzBuzz');
	}
	putchar('\n');
}

