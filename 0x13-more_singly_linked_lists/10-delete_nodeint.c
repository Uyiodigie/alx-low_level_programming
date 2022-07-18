#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 *
 * @head: pointer to head
 * @index: index of the node to be deleted
 * Return: 1 if success, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *last;
	listint_t *next;

	last = *head;
	if (index != 0)
	{
		for (i = 0; i < index - 1 && last != NULL; i++)
			last = last->next;
	}
	if (last == NULL || (last->next == NULL && index != 0))
		return (-1);
	next = last->next;
	if (index != 0)
	{
		last->next = next->next;
		free(next);
	}
	else
	{
		free(last);
		*head = next;
	}
	return (1);
}
