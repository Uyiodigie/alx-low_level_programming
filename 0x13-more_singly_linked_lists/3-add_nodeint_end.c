#include "lists.h"

/**
 * add_nedeint_end - adds a new node at the end of a listint_t list.
 * @head: double pointer to head
 * @n: elements
 * Return: node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = NULL;
	listint_t *temp;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	       return (NULL);
	newNode->n = n;
	if (*head == NULL)
	{
		*head = newNode;
		newNode->next = NULL;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;
	newNode->next = NULL;
	return (*head);
}
