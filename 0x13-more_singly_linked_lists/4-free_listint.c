#include <stdio.h>
#include "lists.h"

/**
  * free_listint - the functions that frees a listint_t list
  * @head: pointer to the head of the node
  * Return: return void
  */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}

