#include "lists.h"
/**
* delete_dnodeint_at_index - tdelet
* @head: pointer
* @index: indexe
* Return: 1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp != NULL && i < index)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (-1);
	prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = prev;
	free(temp);
	return (1);
}

