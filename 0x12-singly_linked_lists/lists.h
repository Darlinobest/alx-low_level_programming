#ifndef _LISTS_H
#define _LISTS_H

#include <stdlib.h>
#include <stdio.h>

typedef struct listss
{
	char *str;
	unsigned int len;
	struct listss *next;
} list_t;

size_t print_list(const list_t *h);

#endif
