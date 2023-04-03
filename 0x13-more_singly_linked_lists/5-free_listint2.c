#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *tmp;

	if (!head)
		return;
	current = *head;
	while (current)
	{
		tmp = current;
		current = tmp->next;
		free(tmp);
	}
	*head = NULL;
	head = NULL;
}
