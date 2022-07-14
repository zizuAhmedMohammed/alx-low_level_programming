#include "lists.h"

/**
 * list_len - Show the number of elements of a list
 * @h: pointer to the start of the linked list
 *
 * Return: The number of elements of a list
 */

size_t list_len(const list_t *h)
{
	const list_t *ptr;
	unsigned int i;

	ptr = h;
	for (i = 0; ptr; i++)
		ptr = ptr->next;
	return (i);
}
