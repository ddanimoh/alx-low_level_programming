#include "lists.h"
/**
 * print_listint - print node value
 * @h: head to node
 * Return: nth of node
 */
size_t print_listint(const listint_t *h)
{
        int sum = 0;

        while (h != NULL)
        {
                sum += 1;

                printf("%d\n", h->n);
                h = h->next;
        }
        return (sum);
}
