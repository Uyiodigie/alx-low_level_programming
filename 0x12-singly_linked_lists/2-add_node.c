#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head pointer
 * @str: string that needs to be duplicated
 * Return: address of duplicated string of NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	temp->len = i;
	temp->next = *head;
	*head = temp;
	return (*head);
}
