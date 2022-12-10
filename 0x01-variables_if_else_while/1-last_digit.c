#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- Program prints last value stored in n
 * Return: 0
 *
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n %  10;

	if (a > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	}
	if (a == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, a);
	}
	if (a < 6 && a != 0)
	{
		printf("Last digit of %d is %d and is lass than 6\n", n, a);
	}
	return (0);
}
