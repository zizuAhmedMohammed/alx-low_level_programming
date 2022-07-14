#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the start of the list
 *
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr;
	unsigned int i;

	ptr = h;
	for (i = 0; tmp; i++)
	{
		printf("[%u] %s\n", ptr->len, tmp->str);
		ptr = ptr->next;
	}
	return (i);
}
