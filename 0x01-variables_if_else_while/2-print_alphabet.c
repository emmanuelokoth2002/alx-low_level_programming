#include <stdio.h>
/**
 * main- prints alphabets in lower case
 * Return: 0
 *
*/
int main(void)
{
	char lk;

	for (lk = 'a' ; lk <= 'z' ; lk++)
	{
		putchar(lk);
	}
	putchar("\n");
	return (0);
}
