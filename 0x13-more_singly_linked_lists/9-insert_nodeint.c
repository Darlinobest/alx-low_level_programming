#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at any given position
 * @head: pointer to the first node
 * @idx: given position to insert the new node
 * @n: the data to insert
 * Return: the address of the pointer or NULL if it
 * fails to insert
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr1, *ptr2;

	ptr1 = malloc(sizeof(listint_t));
	if (ptr1 == NULL)
		return (NULL);
	ptr1->n = n;
	ptr1->next = NULL;

	if (idx == 0)
	{
		ptr1->next = *head;
		*head = ptr1;
		return (ptr1);
	}

	ptr2 = *head;

	for (i = 0; i < idx - 1 && ptr2 != NULL; i++)
	{
		ptr2 = ptr2->next;
	}
	if (ptr2 == NULL)
	{
		free(ptr1);
		return (NULL);
	}
	ptr1->next = ptr2->next;
	ptr2->next = ptr1;

	return (ptr1);
}
