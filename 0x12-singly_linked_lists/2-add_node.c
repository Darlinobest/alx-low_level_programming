#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: head of the linked list
 * @str: the new str to be added
 * Return: the address of the ew list or NULL
 * upon failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);
		temp->str = strdup(str);
		temp->len = strlen(str);
		temp->next = *head;

		*head = temp;
		return (temp);
	}
	return (0);
}
