#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @*h: head pointer
 * Return: size
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
