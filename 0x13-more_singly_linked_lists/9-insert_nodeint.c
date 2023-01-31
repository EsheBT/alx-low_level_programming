#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: points to the head of the list
 * @idx: the index of the node
 * @n: the value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index;
	listint_t *newNode, *ptr;

	if (!head)
		return (NULL);

	ptr = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	if (!idx)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (index = 0; index < (idx - 1); index++)
	{
		if (ptr)
			ptr = ptr->next;
		else
		{
			free(newNode);
			return (NULL);
		}
	}
	newNode->next = ptr->next;
	ptr->next = newNode;
	return (newNode);
}
