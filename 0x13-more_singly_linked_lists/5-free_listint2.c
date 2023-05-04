#include "lists.h"
/**
 * free_listint2 - free double point
 * @head: argu
 */
void free_listint2(listint_t **head)
{
	listint_t *used;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		used = *(head)->next;
		free(*(head));
		*head = used;
	}
	*head = NULL;
}
