#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to head
 * Return: n
 */
int pop_listint(listint_t **head)
{
	listint_t *end = NULL;
	int value = 0;

	if (*head == NULL)
		return (0);
	end = *head;
	value = end->n;
	*head = end->next;
	free(end);
	return (value);
}
