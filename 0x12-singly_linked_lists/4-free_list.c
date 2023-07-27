#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * first - prints a sentence before the main
 * function is executed
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
