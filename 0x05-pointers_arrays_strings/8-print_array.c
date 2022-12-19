#include "main.h"
/**
 * print_array-prints elements in an array
 * @a:array
 * @n:number of values to be printed
*/
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}
	printf('\n');
}
