#include "lists.h"
/**
 * sum_listint - total all node data
 * @head: head of node
 * Return: data summary
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
