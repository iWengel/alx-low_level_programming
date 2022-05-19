#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: head of the linked list_t list
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *new_list;

	while ((new_list = head) != NULL)
	{
		head = head->next;
		free(new_list->str);
		free(new_list);
	}
}
