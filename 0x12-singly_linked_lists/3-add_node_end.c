#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: head of the linked list
 * @str: string to be store
 * Return: address of the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *newNode;

	if (head == NULL && str == NULL)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;	
		}
		temp->next = newNode;
		return (temp);
	}
	return (NULL);
}
