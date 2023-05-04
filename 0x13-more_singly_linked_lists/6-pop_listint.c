#include "lists.h"
#include <stdio.h>

/**
  * pop_listint - delete the head node of a listint_t linked list
  * @head: Pointer to the head of list
  * Return:  the data for the list
  */

int pop_listint(listint_t **head)
{
	int content;
	listint_t *tmip;

	if (head == NULL)
		return (0);

	tmip = *head;
	content = tmip->n;
	*head = (*head)->next;
	free(tmip);

	return (content);
}
