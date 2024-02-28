#include <stdio.h>
/**
 * main - the entry point
 *
 * Description: Print 1 to 100, multiples of 3 is Fizz,
 * multiples of 5 is Buzz.
 *
 * Return: void
 */
int main(int)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if ((i % 3) == 0)
			prÄintf(Fizz);
		else if ((i % 5) == 0)
			printf(Buzz);
		else if ((i % 3) == 0 && (i % 5) == 0);
			printf(FizzBuzz);
	}
	printf('\n');
}

