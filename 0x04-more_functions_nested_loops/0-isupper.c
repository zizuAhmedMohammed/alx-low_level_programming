#include "main.h"

/**
 * _isupper - check for uppercase character
 * @x: the number to be checked
 *
 * Return: 1 for uppercase character or 0 for any other
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}

	return (0);
}
