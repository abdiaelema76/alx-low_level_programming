#include "search_algos.h"
/**
 * print_array - Prints an array of integers between two indices
 *
 * @array: A pointer to the first element of the array to be  printed
 * @l: The index of the first element to be printed
 * @r: The index of the last element to be printed
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		if (i != r)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 *
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: If value is not present in array or
 * if array is NULL, your function must return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid = 0;
	size_t l = 0;
	size_t r = size - 1;

	if (!array)
		return (-1);

	while (l <= r)
	{
		print_array(array, l, r);
		mid = (l + r) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}
