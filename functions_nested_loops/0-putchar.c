#include "main.h"
#include <stdio.h>

/**
 * main - The entry point
 *
 * Description: To print exactly _putchar
 *
 * Return: Always 0 succes
 */

int _putchar(char c)
{
	    return putchar(c);
}

int print_putchar()
{
	    _putchar('_');
	    _putchar('p');
	    _putchar('u');
	    _putchar('t');
	    _putchar('c');
	    _putchar('h');
	    _putchar('a');
	    _putchar('r');
	    _putchar('\n');
	    return 0;
}

int main() {
	    print_putchar();
	    return 0;
}
