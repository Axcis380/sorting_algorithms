#include "sort.h"

/**
 * quick_sort - sorting algorithm
 * @array: unsorted list of integers
 * @size: size of array
 *
 * Description: Quick sort an array of integers
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
    if (array != NULL && size > 1)
        sort(array, 0, size - 1, size);
}

/**
 * sort - sorting algorithm
 * @array: unsorted list of integers
 * @low: low index
 * @high: high index
 * @size: size of array
 *
 * Description: Recursion method for divide and conquer array and partition
 * Return: void
 */
void sort(int *array, int low, int high, size_t size)
{
    if (low < high)
    {
        int pivot = partition(array, low, high, size);
        sort(array, low, pivot - 1, size);
        sort(array, pivot + 1, high, size);
    }
}

/**
 * partition - Lomuto partition
 * @array: unsorted list of integers
 * @low: low index
 * @high: high index
 * @size: size of array
 *
 * Description: Swap elements comparing to the pivot element
 * Return: index of the pivot
 */
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

/**
 * swapper - swap elements
 * @a: pointer to an element
 * @b: pointer to another element
 *
 * Description: Swap elements
 * Return: void
 */
void swapper(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
