#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a list.
 * @h: pointer to the head of the list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count_nodes++;
	}
	return (count_nodes);
}