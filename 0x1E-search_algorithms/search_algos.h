#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stddef.h>  // For size_t

/**
 * struct listint_s - Singly linked list for use in jump list
 * @n: Integer value
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: A singly linked list node structure
 * used in jump list algorithm
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 * @n: Integer value
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: A singly linked list node structure
 * used in linear skip algorithm
 * with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

/**
 * linear_search - Searches for a value in an array
 * using Linear search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located,
 * or -1 if value is not present or array is NULL
 */
int linear_search(int *array, size_t size, int value);

/**
 * binary_search - Searches for a value in a sorted array using Binary search
 * @array: Pointer to the first element of the sorted array
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The index where value is located,
 * or -1 if value is not present or array is NULL
 */
int binary_search(int *array, size_t size, int value);

/**
 * jump_search - Searches for a value in a sorted array using Jump search
 * @array: Pointer to the first element of the sorted array
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The index where value is located,
 * or -1 if value is not present or array is NULL
 */
int jump_search(int *array, size_t size, int value);

/**
 * interpolation_search - Searches for a value in a sorted
 * array using Interpolation search
 * @array: Pointer to the first element of the sorted array
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The index where value is located,
 * or -1 if value is not present or array is NULL
 */
int interpolation_search(int *array, size_t size, int value);

/**
 * exponential_search - Searches for a value in a sorted
 * array using Exponential search
 * @array: Pointer to the first element of the sorted array
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The index where value is located,
 * or -1 if value is not present or array is NULL
 */
int exponential_search(int *array, size_t size, int value);

/**
 * advanced_binary - Searches for a value in a sorted
 * array using a modified Binary search
 * @array: Pointer to the first element of the sorted array
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The index where value is located,
 * or -1 if value is not present or array is NULL
 */
int advanced_binary(int *array, size_t size, int value);

/**
 * jump_list - Searches for a value in a singly linked
 * list using Jump list algorithm
 * @list: Pointer to the first node in the linked list
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return: A pointer to the node where value is located,
 * or NULL if value is not present or list is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value);

/**
 * linear_skip - Searches for a value in a singly
 * linked list using Linear skip algorithm
 * @list: Pointer to the first node in the linked list
 * @value: Value to search for
 *
 * Return: A pointer to the node where value is located,
 * or NULL if value is not present or list is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /* SEARCH_ALGOS_H */
