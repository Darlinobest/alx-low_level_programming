#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head of the list
 * Return: the value of the head node removed
 */

int pop_listint(listint_t **head)
{
	int current_value;

	listint_t *tmp;

	if (*head == NULL)
		return (0);
	tmp = *head;
	*head = (*head)->next;
	current_value = tmp->n;
	free(tmp);
	
	return (current_value);
}
