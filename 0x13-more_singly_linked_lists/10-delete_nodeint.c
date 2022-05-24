#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index of a linked list
 * @head: pointer to the head node
 * @index: index/position of node to be deleted
 *
 * Return: 1 if it succeds, 0 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *current = NULL;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	i = 0;
	while (i < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);

		tmp = tmp->next;
		i++;
	}

	current = tmp->next;
	tmp->next = current->next;
	free(current);

	return (1);
}
