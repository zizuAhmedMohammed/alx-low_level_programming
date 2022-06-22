#include "main.h"

/**
 * _puts_recursion - Print a string followed by a new line
 * @s: string to print
 *
 * Return: Void (Nothing)
 */

void _puts_recursion(char *s)
{
	if (*s == '/0')
	{
		-putchar('\n');
		return;
	}

	_putchar(*s);
	*s++;
	_puts_recursion(*s);
}
