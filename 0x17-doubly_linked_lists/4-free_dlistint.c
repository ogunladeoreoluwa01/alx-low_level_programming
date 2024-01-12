#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 *
 *
 * @head: the head
 * Return: nothing it's void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
