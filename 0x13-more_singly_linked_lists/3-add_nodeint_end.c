#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a  new node at the end of a listint_t list.
 * @head: A pointer to the head of the list.
 * @n: The integer to add as value of the new node.
 * Return: A pointer to the new added node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *node;

	node = malloc(sizeof(listint_t));
	if (node)
	{
		node->n = n;
		node->next = NULL;
		if (*head == NULL)
		{
			*head = node;
		}
		else
		{
			tmp = *head;
			while (tmp->next != NULL)
				tmp = tmp->next;
			tmp->next = node;
		}
	}
	return (node);
}
