#include "lists.h"

/**
 * list_len - returns the number of elements in a list-t list.
 * @h: pointer to the singly linked list
 * Return: number of elements in the list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t no_of_elem = 0;

	while (h != NULL)
	{
		h = h->next;
		no_of_elem++;
	}
	return (no_of_elem);
}
