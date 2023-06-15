#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - Write a function.
 * @head: pointer to t doubly linked list
 * Return: NULL
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
