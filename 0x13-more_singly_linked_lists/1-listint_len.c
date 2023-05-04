#include "lists.h"
/**
 * listint_len - num of elemnet
 * @h: str
 * Return: num of element
 */
size_t listint_len(const listint_t *h)
{
	int num_of_elements;

	num_of_elements = 0;

	while (h != NULL)
	{
		num_of_elements++;

		h = h->next;
	}
	return (num_of_elements);
}
