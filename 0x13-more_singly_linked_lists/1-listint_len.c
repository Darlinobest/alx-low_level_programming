#include "lists.h"

/**
 * listint_len - prints the num of elements
 * @h: head point to the first node
 * Return: number of elements of the list
 */

size_t listint_len(const listint_t *h)
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
		ptr = ptr->next;
	}
	return (count);
}
