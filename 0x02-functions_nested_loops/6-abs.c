#include "main.h"
/**
 *_abs- computes the absolute value of an interger
 *@t: absolute to be computed
 *Return: the absolute value
*/
int _abs(int t)
{
	if (t < 0)
	{
		return (t * (-1));
	}
	else if (t == 0)
	{
		return (0);
	}
	else
	{
		return (t);
	}
}
