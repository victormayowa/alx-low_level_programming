#include "lists.h"
/**
 * insert_dnodeint_at_index - func to insert a new node at a given position.
 * @idx: index or position in the list where the new node should be inserted.
 * @h: double pointer to the header of the doubly linked list.
 * @n: data value/content of the new node that will be inserted into the list
 * Return: The address of the new node or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (NULL);
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next->prev = new_node;
	temp->next = new_node;
	return (new_node);
}

