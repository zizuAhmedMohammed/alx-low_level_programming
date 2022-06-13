#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 *
 * Return: Void
 */

void rev_string(char *s)
{
	int i, c, j;
	char *a, ptr;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (j = 1; j < c; j++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		ptr = s[i];
		s[i] = *a;
		*a = ptr;
		a--;
	}
}
