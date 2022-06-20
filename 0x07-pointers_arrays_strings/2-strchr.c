#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 *
 * Return: pointer to the occurence when c found or null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
		if ('c' == *(s + i))
		{
			return (s + i);
		}
		else
		{
			return (0);
		}
}
