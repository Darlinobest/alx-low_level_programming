#include "lists.h"

/**
 * dlistint_len - counts the number of elements
 * @h: pointer to the head of the list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count_elements = 0;

	while (h != NULL)
	{
		count_elements += 1;
		h = h->next;
	}
	return (count_elements);
}
