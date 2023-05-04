#include "lists.h"

/**
 * sum_listint - sums all the data(n) of the linked list listint_t
 * @head: Pointer to the head of the list
 * Return: an integer
 */

int sum_listint(listint_t *head)
{
	int sum = head->n;
	listint_t *c = head;

	for (; c != NULL; c = c->next)
		sum += c->n;
	return (sum);
}
