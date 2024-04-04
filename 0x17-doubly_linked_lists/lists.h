#ifndef _LISTS_H
#define _LISTS_H

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

typedef struct dlistint_x
{
	int n;
	struct dlistint_x *next;
	struct dlistint_x *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);

#endif