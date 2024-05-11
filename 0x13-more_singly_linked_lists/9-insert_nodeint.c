#include "lists.h"
/**
 * insert_nodeint_at_index - insert node @ given index
 * @head: head of node
 * @idx: @ index to insert
 * @n: data to node
 * Return: new node created
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int len = listint_len(*head), count = 0;
	listint_t *ptr = malloc(sizeof(listint_t)), *h = *head, *prev;

	if (ptr == NULL || idx > len)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head && idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
	if (*head == NULL && idx == 0)
	{
		*head = ptr;
		return (ptr);
	}
	while (h != NULL)
	{
		if (count == idx)
		{
			ptr->next = h;
			prev->next = ptr;
			return (ptr);
		}
		prev = h;
		h = h->next;
		count += 1;
	}
	if (count == len && h == NULL)
	{
		prev->next = ptr;
		return (ptr);
	}
	free(ptr);
	return (NULL);
}
/**
 * listint_len - count node;
 * @h: head node
 * Return: Total node
 */
size_t listint_len(const listint_t *h)
{
	int node_t = 0;

	while (h != NULL)
	{
		node_t++;
		h = h->next;
	}
	return (node_t);
}
