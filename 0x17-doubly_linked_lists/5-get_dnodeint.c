#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node
 * @head: pointernked list
 * @index: represents the index o..
 * Return: NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}
