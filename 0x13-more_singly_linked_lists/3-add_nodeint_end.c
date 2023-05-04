#include "lists.h"
/**
 * add_nodeint_end - adding new node to the end of list
 * @head: point
 * @n: nth
 * Return: address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_node, *nodes = *head;

	add_node = malloc(sizeof(listint_t));

	if (add_node == NULL)
	{
		return (NULL);
	}
	add_node->n = n;

	add_node->next = NULL;
	if (*head == NULL)
	{
		*head = add_node;
		return (add_node);
	}
	else
	{
		while (nodes->next != NULL)
		{
			nodes = nodes->next;
		}
		nodes->next = add_node;
	}
	return (add_node);
}
