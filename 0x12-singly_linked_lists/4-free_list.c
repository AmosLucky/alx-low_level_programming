#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_list - free list_t list
 * @head: pointer to head of linked list
 * Return: nothing;
 **/
void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		if (head->str != NULL)
			free(head->str);
		next = head->next;
		free(head);
		head = next;
	}
}
