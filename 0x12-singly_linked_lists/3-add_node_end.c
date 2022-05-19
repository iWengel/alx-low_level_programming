#include "lists.h"

/**
 * add_node_end - adds a node at the end of a list.
 * @head: head of the linked list_t list
 * @str: string to be stored
 * Return: pointer to the address of the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *temp_list;
	size_t no_of_char;

	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
		return (NULL);

	new_list->str = strdup(str);

	for (no_of_char = 0; str[no_of_char]; no_of_char++)
		;

	new_list->len = no_of_char;
	new_list->next = NULL;
	temp_list = *head;

	if (temp_list == NULL)
		*head = new_list;
	else
	{
		while (temp_list->next != NULL)
			temp_list = temp_list->next;
		temp_list->next = new_list;
	}
	return (*head);
}
