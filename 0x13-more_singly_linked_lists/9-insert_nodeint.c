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
	listint_t *pre, *curr, *h = *head;
	size_t x = listint_len(h), ret = 0;
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	if (idx > x)
	{
		free(ptr);
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;
	if (h == NULL && idx == ret)
	{
		h = ptr;
		return (ptr);
	}
	while (ret < x)
	{
		curr = h;
		if (ret == idx)
		{
			ptr->next = curr;
			if (pre != NULL)
				pre->next = ptr;
			else
				*head = ptr;
			return (ptr);
		}
		pre = curr;
		h = h->next;
		ret += 1;
	}
	if (ret == idx)
	{
		pre->next = ptr;
		return (ptr);
	}
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
