#include "lists.h"

/**
 * print_listint - prints all element of a list
 * @h: head point to the first node
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	if (h == NULL)
		printf("Empty list\n");
	ptr = NULL;

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (count);
}
