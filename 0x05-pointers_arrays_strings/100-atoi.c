#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: The pointer to convert
 *
 * Return: An integer
 */

int _atoi(char *s)
{
	int c = 0;
	int i = 0;
	int j = 1;
	unsigned int k = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			j *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			i = 1;
			k = (k * 10) + (s[c] - '0');
			c++;
		}

		if (i == 1)
		{
			break;
		}

		c++;
	}

	k *= j;
	return (k);
}
