#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: points to the head of the list.
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL, *ptr = NULL;

	if (!head || !*head)
		return (NULL);

	ptr = *head;
	*head = NULL;

	while (ptr)
	{
		next = ptr->next;
		ptr->next = *head;
		*head = ptr;
		ptr = next;
	}
	return (*head);
}
