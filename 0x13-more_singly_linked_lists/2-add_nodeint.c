#include "lists.h"

/**
 * add_nodeint - Adds new node at beginning of list
 * @head: head of list
 * @n: number of elements
 *
 * Return: address of new element. Null if fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
