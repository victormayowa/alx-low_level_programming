#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_list - Searches for a value in a sorted linked list using jump search
 * @list: Pointer to the head of the list
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return: Pointer to the node where value is located, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t j, pi;
	listint_t *c, *p;

	if (!list || size == 0)
		return (NULL);

	j = sqrt(size);
	c = list;
	p = NULL;

	while (c && c->n < value)
	{
		p = c;
		pi = c->index;
		for (size_t i = 0; i < j && c->next; i++)
			c = c->next;
		printf("Value checked at index [%lu] = [%d]\n", c->index, c->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", pi, c->index);

	while (p && p->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", p->index, p->n);
		p = p->next;
	}

	if (p && p->n == value)
		return (p);
	return (NULL);
}
