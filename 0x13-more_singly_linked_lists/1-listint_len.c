#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - computes the length of the liked list..
 * @h: a pointer to the list to iterato to.
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	size_t i = 0;

	tmp = h;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
