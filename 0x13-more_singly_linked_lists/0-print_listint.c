#include "lists.h"
/**
 * print_listint - all element of linked list
 * @h: list type
 * Return: size of node
 */
size_t print_listint(const listint_t *h)
{
	size_t num_of_size;

	num_of_size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num_of_size += 1;
		h = h->next;
	}
	return (num_of_size);
}
