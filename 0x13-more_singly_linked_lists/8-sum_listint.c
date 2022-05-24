#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a listint_t list
 * @head: head node of the linked list
 *
 * Return: the sum of all the data in the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
