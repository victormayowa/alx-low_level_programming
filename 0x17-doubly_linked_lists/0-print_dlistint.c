#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - print list
 * @h: height
 * Return: lsuzet
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

