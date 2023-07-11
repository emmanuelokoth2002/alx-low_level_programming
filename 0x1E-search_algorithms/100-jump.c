#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump search
 * algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t i = 0;
	size_t j;

	if (array == NULL)
		return (-1);

	while (array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		prev = i;
		i += step;
		if (i >= size)
		break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, i);
	for (j = prev; j <= i; j++)
	{
		if (j < size)
		{
			printf("Value checked array[%lu] = [%d]\n", j, array[j]);
			if (array[j] == value)
				return (j);
		}
	}

	return (-1);
}
