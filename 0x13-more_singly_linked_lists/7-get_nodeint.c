#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: head node of the linked list
 * @index: index of the node to be returned
 *
 * Return: pointer to the node to be returned, NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp;

	*tmp = head;
	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp ? tmp : NULL);
}
