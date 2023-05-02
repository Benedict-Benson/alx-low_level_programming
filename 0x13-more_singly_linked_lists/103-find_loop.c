#include "lists.h"

/**
 * find_listint_loop - fn  that finds the loop in a linked list
 * @head: pointer to the head of the listint_t list
 *
 * Return: address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t, *h = head;

	if (!head)
		return (NULL);

	while (t && h && h->next)
	{
		h = h->next->next;
		t = t->next;

		if (t == h)
		{
			t = h;

			while (t != h)
			{
				t = t->next;
				h = h->next;
			}
			return (h);
		}


	}

	return (NULL);
}



