#include "search_algos.h"
#include <stdio.h>

/**
 * advanced_binary_recursive - Recursive function for advanced binary search
 * @array: Pointer to the first element of the array to search in
 * @left: Left index of the subarray
 * @right: Right index of the subarray
 * @value: Value to search for
 *
 * Return: The index where value is located,
 *         or -1 if value is not present
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (left > right)
		return (-1);
	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
	i = (left + right) / 2;

	if (array[i] == value)
	{
		if (i > left && array[i - 1] == value)
			return (advanced_binary_recursive(array, left, i, value));
		return (i);
	}

	if (array[i] < value)
		return (advanced_binary_recursive(array, i + 1, right, value));
	return (advanced_binary_recursive(array, left, i, value));
}

/**
 * advanced_binary - Searches for a value in a sorted
 * array using advanced binary search
 * @array: Pointer to the first element of the sorted array
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The index where value is located,
 *         or -1 if value is not present or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
