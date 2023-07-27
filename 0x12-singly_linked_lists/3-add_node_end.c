#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

unsigned int _strlen(const char *s)
{
	unsigned int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * *add_node_end - adds new nodes to the end of the linked list
 *
 * @head: a pointer to the head of the linked list
 * @str: the string to be stored in the new head
 * Return: a pointer to the next node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *dup;
	list_t *end;

	dup = (*head);
	end = (list_t *)(malloc(sizeof(list_t)));
	if (end == NULL)
		return (NULL);

	end->len = _strlen(str);
	end->str = strdup(str);
	end->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = end;
		return ((*head));
	}
	while (dup->next != NULL)
	{
		dup = dup->next;
	}
	dup->next = end;
	return ((*head));
}
