#include "lists.h"
#include <stdio.h>

/**
 * list_len - prints lists len
 * @h: pointer to list_t list
 *
 * Return: No of elements in n
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}

	return (a);
}
