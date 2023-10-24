#include "sort.h"

void quick_sort(int *array, size_t size)
{
	if (array != NULL && size > 1)
		sort(array, 0, size - 1, size);
}

void sort(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot = partition(array, low, high, size);
		sort(array, low, pivot - 1, size);
		sort(array, pivot + 1, high, size);
	}
}

int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;

	for (int j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swapper(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}

	if (i + 1 != high)
	{
		swapper(&array[i + 1], &array[high]);
		print_array(array, size);
	}

	return i + 1;
}

void swapper(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
