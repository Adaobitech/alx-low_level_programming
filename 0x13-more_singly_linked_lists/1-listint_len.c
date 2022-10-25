#include "lists.h"

/**
 * listint_len - returns number of elements in a listint_t list
 * @h: head of lis
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
