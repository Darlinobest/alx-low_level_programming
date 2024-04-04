#ifndef _LISTS_H
#define _LISTS_H

#include <stdio.h>
#include <stddef.h>
#include <string.h>

typedef struct dlistint_x
{
	int n;
	struct dlistint_x *next;
	struct dlistint_x *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif
