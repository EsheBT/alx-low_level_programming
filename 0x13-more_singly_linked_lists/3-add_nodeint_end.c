#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of list
 * @head: points to the head of list
 * @n: what goes in the new node
 * Return: address of new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newTail;
	listint_t *ptr = *head;

	if (!head)
		return (NULL);

	newTail = malloc(sizeof(listint_t));
	if (!newTail)
		return (NULL);

	newTail->n = n;

	newTail->next = NULL;

	if (ptr)
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = newTail;
	}
	else
		*head = newTail;
	return (newTail);
}

