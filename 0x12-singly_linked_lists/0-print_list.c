#include "lists.h"

/**
 * print_list - prints all element of the list
 * @h: pointer to the beginning of the list
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	int node;

	if (h == NULL)
		return (0);

	for (node = 0; h->next != NULL; node++)
	{
		if (h->str == NULL)
			printf("[%lu] %s\n", h->len, "(nil)");
		else
		{
			printf("[%lu] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	printf("[%lu] %s\n", h->len, "(nil)");

	return (node);
}
