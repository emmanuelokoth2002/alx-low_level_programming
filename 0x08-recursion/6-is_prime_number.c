#include "main.h"
/**
 * is_prime_number - says an interger is prime number or not
 * @n: number to evaluate
 * Return: 1 if number is prime,0 if not
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - calculates if a number is prime
 * @n: number to evaluate
 * @i: iterate
 * Return: 1 if n is prime ,0 if not
*/
int actual_prime(int n, int i)
{
	if (n == 1)
		return (1);
	if (n % i == 0 && i == 0)
		return (0);
	return (actual_prime(n, i - 1));
}
