#include <stdio.h>
#include "lists.h"

/**
  * get_nodeint_at_index - gets the index position of the node
  * @head: pointer to the head of the node
  * @index: the index argument to checked.
  * Return: the nth node of the listint_t linked list.
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;

	while (head != NULL)
	{
		if (c == index)
			return (head);
		head = head->next;
		c++;
	}
	return (NULL);
}

