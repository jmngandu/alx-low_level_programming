#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to head of list
 * @index: index of value to be returned
 * Return: address of node at input index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;

	register uint count = 0;

	current = head;
	while (current)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (current);
}
