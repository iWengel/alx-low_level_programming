#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list.
 * @head: head of the linked list_t list.
 * @str: string to be stored
 * Return: pointer to the address of the head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list;
	size_t no_of_char;

	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
		return (NULL);

	new_list->str = strdup(str);

	for (no_of_char = 0; str[no_of_char]; no_of_char++)
		;

	new_list->len = no_of_char;
	new_list->next = *head;
	*head = new_list;

	return (*head);
}
