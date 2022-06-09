#include "main.h"

/**
 * print_most_numbers - print the numbers from 0 to 9
 * followed by a new line
 *
 * Description: print the numbers excluding 2 & 4
 *
 * Return: the numbers from 0 to 9
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');
}
