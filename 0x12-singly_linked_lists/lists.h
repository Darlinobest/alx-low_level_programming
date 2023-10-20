#ifndef _LISTS_H
#define _LISTS_H

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct list_t - A structure to implement a linked list
 * @len: An integer data element of the list
 * @str: A string pointer element of the list
 * @next: A pointer to the next list_t node
 */

typedef struct list_t
{
	size_t len;
	char *str;
	struct list_t *next;
} list_t;

size_t print_list(const list_t *h);

#endif
