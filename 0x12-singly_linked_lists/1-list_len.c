#include "lists.h"

/**
 * list_len - displays the num of elements
 * in a linked list
 * @h: singly linked list
 * Return: num of elemets in a list
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
