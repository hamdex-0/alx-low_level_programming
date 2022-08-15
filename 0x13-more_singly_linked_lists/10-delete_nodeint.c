#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given index.
 * @head: The first element of the list.
 * @index: The position of the node to delete.
 * Return: 1 if failure. -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp, *tmp2;

	tmp = *head;
	while ((tmp->next != NULL) && (i + 1 < index))
	{
		tmp = tmp->next;
		i++;
	}
	if (i + 1 < index)
	{
		tmp2 = tmp->next;
		tmp->next = tmp->next->next;
		free(tmp2);
		return (1);
	}
	return (-1);
}
