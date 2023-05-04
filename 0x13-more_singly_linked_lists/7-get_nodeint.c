#include "lists.h"

/**
 * listint_len - funct
 * @s: argu
 * Return: number
 */
size_t listint_ln(const listint_t *s)
{
	int x = 0;

	while (s != NULL)
	{
		x = x + 1;
		s = s->next;
	}
	return (x);
}


/**
 * get_nodeint_at_index - pick node at nth index
 * @head: point var
 * @index: node index
 * Return: index to struct
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t size;
	unsigned int x = 0;

	size = listint_ln(head);

	if (index > size)
	{
		return (NULL);
	}
	while (x < index)
	{
		head = head->next;
		x = x + 1;
	}
	return (head);
}
