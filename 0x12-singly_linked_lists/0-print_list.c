#include "lists.h"

/**
 * print_list - prints all element of the list
 * @h: pointer to the beginning of the list
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t node;

	node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
			printf("[%d] %s", h->data, h->str);
		h = h->next;
		node++;
	}
	return (node);
}
