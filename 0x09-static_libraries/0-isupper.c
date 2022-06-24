#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: the number to be checked
 *
 * Return: 1 for uppercase character or 0 for any other
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
