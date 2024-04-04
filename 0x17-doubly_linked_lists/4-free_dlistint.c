#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: pointer to the head of the list
 * Return: freed list or void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
