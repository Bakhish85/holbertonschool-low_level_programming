#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The entry point
 *
 * Description: Assign a random number
 *
 * Return: Always 0 Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
/**
 * main - The entry point
 *
 * Description: Print whether the number is positive or negative
 *
 * Return: Always 0 Success
 */
int main(void)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is negative\n", n);
	else if (n < 0)
		printf("%d is zero\n", n);
	return (0);
}
