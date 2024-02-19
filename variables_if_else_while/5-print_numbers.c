#include <stdio.h>
/**
 * main - The entry point
 *
 * Description: Print single digit numbers
 *
 * Return: Always 0 success
 */
int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
