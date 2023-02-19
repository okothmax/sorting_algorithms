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
 * bubble_sort - algorithm used to sort the values
 * @array: Array to be sorted
 * @size: Size of array
 * Description: Function that sorts an array using the bubble sort method in ascending order
 * Return: 0
 */

void bubble_sort(int *array, size_t size)
{
    unsigned int i, j;

    if (array == NULL)
        return;

    for (i = 0; i < size - 1; i++)
    {
        int flag = 0;
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
                print_array(array, size);
                flag = flag + 1;
            }
        }
        if (flag == 0)
            break;
    }
}
