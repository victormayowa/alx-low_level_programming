#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of the list
 * @idx: index where the new node should be added (starting at 0)
 * @n: value of the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *current_node;

	if (head == NULL)
		return (NULL);
	/* Create new node */
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* Insert new node at the beginning of the list */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	/* Traverse the list to find the node before the index */
	current_node = *head;
	for (i = 0; i < idx - 1 && current_node != NULL; i++)
		current_node = current_node->next;
	/* If the index is out of range, free new node and return NULL */
	if (i < idx - 1 || current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/* Insert new node after the node before the index */
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}

