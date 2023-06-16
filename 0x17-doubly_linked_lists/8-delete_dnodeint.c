#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * of a dlistint_t linked list
 * @head: double point to head of linked list
 * @index: index of node to be deleted
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	size_t size = 0;

	if (!*head)
		return (-1);
	while (current)
	{
		size++;
		current = current->next;
	}
	if (size < index + 1)
		return (-1);
	current = *head;
	if (!index)
	{
		*head = current->next;
		if (current->next)
			current->next->prev = NULL;
		current->next = NULL;
		free(current);
		return (1);
	}
	while (index--)
		current = current->next;
	current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
