#include "lists.h"
/**
 * add_nodeint - adding new node from list
 * @head: pointer head
 * @n: const n
 * Return: address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_node = malloc(sizeof(listint_t));

	if (add_node == NULL)
	{
		return (NULL);
	}

	add_node->n = n;
	add_node->next = *head;
	*head = add_node;

	return (add_node);
}
