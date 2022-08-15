#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - Frees a listint_t.
 * @head: The head of the list to free.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
