#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to head pointer
 * @str: string to be duplicated
 * Return: duplicate of string
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *temp, *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (i = 0; str[i]; i++)
		;
	new->len = i;
	new->next = NULL;
	temp = *head;
	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
