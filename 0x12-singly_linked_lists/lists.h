#ifndef _LISTS_H
#define _LISTS_H

#include <stddef.h>
#include <stdio.h>

typedef struct list_t
{
        int data;
        char *str;
        struct list_t *next;
}list_t;

size_t print_list(const list_t *h);

#endif
