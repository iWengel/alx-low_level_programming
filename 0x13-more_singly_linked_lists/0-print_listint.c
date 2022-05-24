#include "lists.h"

/**
 * print_listint - prints all the elements in a linked list
 * @h: pointer to the linked list of type listint_t
 *
 * Return - Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
