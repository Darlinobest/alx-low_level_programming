#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: singly linked list
 * Return: num of elements in the list
 */

size_t print_list(const list_t *h)
{
	size_t num_of_elements;

	num_of_elements = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		num_of_elements++;
	}
	return (num_of_elements);
}
