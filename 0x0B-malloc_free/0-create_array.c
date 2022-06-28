#include "main.h"
#include <stdlib.h>

/**
 *  create_array - creates array of chars & initializes it with a specific char
 *  @size: size of array to be created
 *  @c: char to initialize array
 *
 *  Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *x;

	if (size == 0)
		return (NULL);
	x = malloc(size * sizeof(char));
	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		x[i] = c;
	}
	return (x);
}
