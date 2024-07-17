#include "./search_algos.h"

/**
 * print_interval - prints an interval of indices
 * @array: input array
 * @start: start idx
 * @end: end idx
 */
void print_interval(int *array, int start, int end)
{
	while (start <= end)
	{
		printf("%d", array[start]);
		start++;
		if (start <= end)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - binary search algo
 * @array: the input array
 * @size: size of array
 * @value: the value to be searched for
 * Return: the idx or -1 on not found
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1;
	int mid = size / 2;

	if (array == NULL)
		return (-1);
	if (array[low] == value)
		return (low);
	while (low <= high)
	{
		printf("Searching in array: ");
		print_interval(array, low, high);
		mid = (low + high) / 2;
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
