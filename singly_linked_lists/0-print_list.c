#include "lists.h"
#include <stdio.h>
/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;
	int i;
	const list_t *c = h;

	for (i = 0; c; i++)
	{
		if (c->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", c->len, c->str);
		c = c->next;
		len++;
	}
return (len);
}
