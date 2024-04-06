#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/*
 * File: lists.h
 * Auth: Bakhish Umudlu
 * Desc: Header file containing prototypes for all functions
 *	used in the singly_linked_lists directory
 */

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked node structure
 *		for Holberton project
 */
typedef struct lists_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

unsigned int _strlen(char *s);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif