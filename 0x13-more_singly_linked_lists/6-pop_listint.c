#include "lists.h"
/**
 * pop_listint - remove node from top
 * Return: top node
 * @head: point to node
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int rmvtop;

	if (*head == NULL)
	{
		return (0);
	}
	ptr = (*head)->next;
	rmvtop = (*head)->n;
	free(*head);
	*head = ptr;

	return (rmvtop);
}
