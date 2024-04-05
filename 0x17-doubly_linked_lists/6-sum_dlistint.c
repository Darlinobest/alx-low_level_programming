#include "lists.h"

/**
 * sum_dlistint - sums all the data in a list
 * @head: pointer to the head of the list
 * Return: total sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	unsigned int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
