#include "lists.h"
/**
 * print_listint - print node value
 * @h: head to node
 * Return: nth of node
 */
size_t print_listint(const listint_t *h)
{
	int node_total = 0;

	while (h != NULL)
	{
		node_total++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node_total);
}
