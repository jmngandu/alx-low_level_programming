#include "lists.h"

/**
 * add_dnodeint_end - adds node to end of doubly linked list
 * @head: pointer to head of list
 * @n: integer value of node
 * Return: pointer to node added
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *current = *head;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (!current)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	while (current->next)
	{
		current = current->next;
	}
	current->next = newNode;
	newNode->prev = current;
	return (newNode);
}
