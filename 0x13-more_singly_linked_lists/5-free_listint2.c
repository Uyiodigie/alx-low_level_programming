#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to head
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *tmp;

	if (head != NULL)
	{
		tmp = *head;
		while ((temp = tmp) != NULL)
		{
			tmp = tmp->next;
			free(temp);
		}
		*head = NULL;
	}
}
