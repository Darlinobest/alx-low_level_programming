#include "lists.h"

/*
 * delete_nodeint_at_index - Deletes node at a given index in a list
 * @head: pointer to the first node of the list
 * @index: position to delete the node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *transverse, *temp;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	transverse = *head;
	for (i = 0; i < index - 1 && transverse != NULL; i++)
	{
		transverse = transverse->next;
	}
	if (transverse == NULL || transverse->next == NULL)
		return (-1);
	temp = transverse->next;
	transverse->next = temp->next;
	free(temp);

	return (1);
}
