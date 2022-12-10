#include <stdio.h>
/**
 * main- prints all possible combinations of single-digit numbers.
 * Return: 0;
 *
*/
int main(void)
{
	int n;

	for (n = 0; n < 100; n++)
	{
		putchar(n + '0');
		if (n < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n);
	return (0);
}
