#include "lists.h"

/**
 * free_listint - frees a linked listint_t list
 * @head: pointer to the head node of the linked list
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
