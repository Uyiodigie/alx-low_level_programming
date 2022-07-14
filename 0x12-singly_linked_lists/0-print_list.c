#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to node struct (HEAD)
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] (%s)\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
