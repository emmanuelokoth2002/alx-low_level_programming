#include "main.h"
/**
 *  swap_int-swaps value of two intergers
 *  @a:int a
 *  @b:int b
*/
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
