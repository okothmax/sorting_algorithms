#include "sort.h"

/**
 * swap - Function that swaps two values
 *
 * @a: Fisrt value
 * @b: Second value
 * Return: 0
 */
void swap(int *a, int *b)
{
    int tmp;

    tmp = *b;
    *b = *a;
    *a = tmp;
}

/**
 * selection_sort - Calls function
 * @array: Array to be sorted
 * @size: Size of array given
 * Descrtiption: Function that sorts an array using the Selection sort in ascending order
 * sort algotrithm
 * Return: 0
 */

void selection_sort(int *array, size_t size)
{
    unsigned int i, j, min_indx;

    if (array == NULL)
        return;

    for (i = 0; i < size - 1; i++)
    {
        min_indx = i;
        for (j = i + 1; j < size; j++)
            if (array[j] < array[min_indx])
                min_indx = j;

        if (i != min_indx)
        {
            swap(&array[min_indx], &array[i]);
            print_array(array, size);
        }
    }
}
