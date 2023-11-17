#ifndef _LISTS_H
#define _LISTS_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listsis - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * ALX project
 */

typedef struct listss
{
	char *str;
	unsigned int len;
	struct listss *next;
} list_t;

size_t print_list(const list_t *h);

#endif
