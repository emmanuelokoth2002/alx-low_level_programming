#include <stdio.h>
/**
 * main- prints alphabets in lower case
 * Return: 0
 *
*/
int main(void)
{
	char l;

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
