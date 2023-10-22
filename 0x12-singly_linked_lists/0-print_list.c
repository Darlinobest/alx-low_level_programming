#include "lists.h"

/**
 * print_list - print elements of list
 * @h: pointer to the first node
 * Return: the number of elements
 */

size_t print_list(const list_t *h)
{
	unsigned int node;

	node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s", h->len, h->str);
		}
		h = h->next;
		node++;
	}
	return (node);
}
