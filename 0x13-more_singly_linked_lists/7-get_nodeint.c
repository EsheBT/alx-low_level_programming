#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: the head of the list
 * @index: the index of the node
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int idx = 0;
	listint_t *ptr = head;

	if (!head)
		return (NULL);

	while (idx < index && ptr)
	{
		ptr = ptr->next;
		idx++;
	}
	if (idx < index)
		return (NULL);
	return (ptr);
}
