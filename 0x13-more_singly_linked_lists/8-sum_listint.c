#include "lists.h"
/**
 * sum_listint - Returns the sun of all the data of a listint_t linked list.
 * @head: The first element of the list.
 * Return: The sum of the data if the list is not empty.
 *	   0 otherwise.
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	const listint_t *tmp;

	tmp = head;
	while (tmp)
	{
		s += tmp->n;
		tmp = tmp->next;
	}
	return (s);
}
