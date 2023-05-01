#include "lists.h"

/**
 * listint_len -  number of elements in a linked listint_t list
 * @h: points to the next node
 *
 * Return: No of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;

		h = h->next;
	}

	return (i);
}
