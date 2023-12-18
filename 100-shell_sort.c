#include "sort.h"
/**
 * print_array - Function that prints the arrau
 * @array: array of integers
 * @size: the size of the of the array
 * Return: Nothing
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
if (i < size - 1)
	{
	printf(", ");
	}
	}
	printf("\n");
}

/**
 * shell_sort -Sort an Array using shell sort
 * @array: array of Int
 * @size: array size
 * return: nothing
 **/

void shell_sort(int *array, size_t size)
{
	size_t interval = 1;
	size_t i, j;
	int temp;

	while (interval < size / 3)
	{
	interval = interval * 3 + 1;
	}
	while (interval > 0)
	{
	for (i = interval; i < size; i++)
	{
	temp = array[i];
	for (j = i; j >= interval && array[j - interval] > temp; j -= interval)
	{
	array[j] = array[j - interval];
	}
	array[j] = temp;
	}
	printf("Interval %lu: ", interval);
	print_array(array, size);
	interval = (interval - 1) / 3;
	}

}
