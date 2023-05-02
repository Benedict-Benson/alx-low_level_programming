#include "lists.h"

/**
 * free_listint_safe - fn that frees a listint_t list
 * @h: points to the first node in linked lst
 *
 * Return: size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lenth = 0;
	int d;
	listint_t *tm;

	if (!h || !*h)
	{
		return (0);

	}

	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			tm = (*h)->next;
			free(*h);
			*h = tm;
			lenth++;

		}
		else
		{
			free(*h);
			*h = NULL;
			lenth++;
			break;
		}
	}

	*h = NULL;

	return (lenth);
}
