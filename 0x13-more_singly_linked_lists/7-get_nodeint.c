#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a list
 * @head: pointer to the first node
 * @index: index of the node to get
 * Return: the nth node of the list or NULL
 * if it doesn't exit
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr_pos;

	ptr_pos = head;

	while (ptr_pos != NULL && index > 0)
	{
		ptr_pos = ptr_pos->next;
		index--;
	}
	return (ptr_pos);
}
