#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node
 * @head: pointer to the head of the list
 * @index: position of the nth node
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (current != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}
