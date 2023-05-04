#include "lists.h"
/**
 * free_listint - free
 * @head: pointer
 */
void free_listint(listint_t *head)
{
	listint_t *used;

	while (head != NULL)
	{
		used = head->next;
		free(head);
		head = used;
	}
}
