#include "sort.h"
/**
 * swap - Function that swaps two variables
 * @a: first integer
 * @b: second integer
 * Return: Nothing
 */
void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
/**
 * bubble_sort - Function that uses bubble soralgorithm
 * @array: first pointer input
 * @size: integer input
 *
 * Return:nothing
 **/
void bubble_sort(int *array, size_t size) 
{
int swapped = 0;
size_t i;
size_t j;
size_t k;

for (i = 0; i < size - 1; i++)
{
for ( j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
swap(&array[j], &array[j + 1]);
swapped = 1;
for (k = 0; k < size; k++)
{
printf("%d", array[k]);
if (k < size - 1) 
{
printf(", ");
}
}
printf("\n");
}
}
if (swapped == 0)
{
break;
}
}
}
