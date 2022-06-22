#include "main.h"

/**
 * factorial - print the factorial of a given number
 * @n: int value
 *
 * Return: the Factorial or -1 to indicate an error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
