#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of the linked list.
 * @head: points to the head of the list
 * @index: the index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	listint_t *node;
	listint_t *ptr = *head;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}

	while (ptr)
	{
		if (idx == index)
		{
			node->next = ptr->next;
			free(ptr);
			return (1);
		}
		node = ptr;
		ptr = ptr->next;
		idx++;
	}
	return (-1);
}
