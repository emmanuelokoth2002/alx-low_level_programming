#include "main.h"
/**
 * _puts_recursion - Prints a string folllowed by new line
 * @s: pointer to a string
 *
 * Return: void
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
