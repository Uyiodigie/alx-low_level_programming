#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head
 * @idx: index of list where the new node should be added
 * @n: data
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newNode;
	listint_t *h;

	h = *head;
	if (idx != 0)
	{
		for (i = 0; i <idx - 1 && h != NULL; i++)
			h = h->next;
	}
	if (h == NULL && idx != 0)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		newNode->next = h->next;
		h->next = newNode;
	}
	return (newNode);
}
