#include "lists.h"

/**
 * list_len - produces the length of a list
 * @h: pointer to the first node
 * Return: number of elements/node in the list
 */

size_t list_len(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 0; h->next != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
