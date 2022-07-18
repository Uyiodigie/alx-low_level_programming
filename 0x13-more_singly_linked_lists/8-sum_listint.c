#include "lists.h"

/**
 * sum_listint - returns the sum of all the dat (n) of a listint_t linked
 * list
 * @head: pointer to head
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int i;

	for (i = 0; head != NULL; i++)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
