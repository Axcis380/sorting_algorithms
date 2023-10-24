#include "sort.h"

/**
 * quicksort  sort algo
 * @array unsortd list of integ
 * @size size of array
 *
 * Description quicksort an rray of integ
 * Return void
 */
void quick_sort(int *array, size_t size)
{
	sort(array, 0, size - 1, size);
}

/**
 * sort sorting algo
 * @array unsorted list of integers
 * @l low index
 * @h last index
 * @size size of ar
 *
 * Description recrsion metod fordivide and conquer arr and parttion
 * Return void
 */
void sort(int *array, int l, int h, size_t size)
{
	int p;

	if (l < h)
	{
		p = partition(array, l, h, size);
		sort(array, l, p - 1, size);
		sort(array, p + 1, h, size);
	}
}

/**
 * partition lomuta partition
 * @array unsorted lst of integ
 * @l low idx
 * @h last idx
 * @size size of arr
 *
 * Description swap elements compar to last elem pivot
 * Return: i
 */
unsigned int partition(int *array, int l, int h, size_t size)
{
	int pivot = array[h];
	int i = l;
	int j;

	for (j = l; j < h; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				swapper(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (array[i] != array[h])
	{
		swapper(&array[i], &array[h]);
		print_array(array, size);
	}
	return (i);
}

/**
 * swapper - swap index
 * @a: pointer to index of an array
 * @b: pointer to index of an array
 *
 * Description: swap elements
 * Return: na
 */
void swapper(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
