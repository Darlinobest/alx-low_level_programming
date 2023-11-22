#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *current, *next_node;

	prev_node = NULL;
	current = *head;
	while (current != NULL)
	{
		next_node = current->next;
		current->next = prev_node;
		prev_node = current;
		current = next_node;
	}
	*head = prev_node;
	return (*head);
}
