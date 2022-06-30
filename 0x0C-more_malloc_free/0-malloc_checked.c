#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory to allocate
 *
 * Return: pointer to allocated memory or 98 it the process fails
 */

void *malloc_checked(unsigned int b)
{

	void *p = malloc(b);

	if (p == NULL)
		exit (98);

	return (p);

}
