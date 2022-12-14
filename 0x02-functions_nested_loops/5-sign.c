#include "main.h"
/**
 * print_sign-print sign of a number
 * @n:sign to be printed
 * Return: 1 if number greater than 0
 * 0 of number is 0
 *-1 if number is less than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
