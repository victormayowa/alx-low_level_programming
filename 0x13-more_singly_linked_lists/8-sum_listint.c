#include "lists.h"

/**
 * sum_listint - sums all the data(n) of the linked list listint_t
 * @head: Pointer to the head of the list
 * Return: an integer
 */

int sum_listint(listint_t *head)
{
	size_t i;
	int sum = head->n;

	if (head == NULL)
		return (0);
	for (i = 0; head != NULL; i++)
		sum += head->n;
	return (sum);
}
