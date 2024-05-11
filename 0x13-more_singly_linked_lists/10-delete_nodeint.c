#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at index specified
 * @head: head to nodes
 * @index: index given
 * Return: 1 on success o -1 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h = *head, *del, *prev = NULL;
	unsigned int count = 0;

	while (h != NULL)
	{
		if (count == index)
		{
			del = h;
			h = h->next;
			if (prev != NULL)
				prev->next = h;
			else
				(*head) = h;
			free(del);
			return (1);
		}
		prev = h;
		h = h->next;
		count += 1;
	}
	return (-1);
}
