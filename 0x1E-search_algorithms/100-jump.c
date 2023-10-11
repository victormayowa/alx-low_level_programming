#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted
 * array using Jump search algorithm
 * @array: Pointer to the first element of the sorted array
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The index where value is located,
 *         or -1 if value is not present or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0, i;

	if (array == NULL)
		return (-1);

	while (array[step] < value && step < size)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		prev = step;
		step += sqrt(size);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

	for (i = prev; i <= step && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
