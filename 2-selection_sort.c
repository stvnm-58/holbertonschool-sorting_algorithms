#include "sort.h"

/**
 * selection_sort - Trie un tableau d'entiers par sélection
 * @array: Le tableau d'entiers
 * @size: La taille du tableau
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;
	int tmp;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (j = 0; j < size - 1; j++)
	{
		min_idx = j;
		for (i = j + 1; i < size; i++)
		{
			if (array[i] < array[min_idx])
			{
				min_idx = i;
			}
		}

		if (min_idx != j)
		{
			tmp = array[j];
			array[j] = array[min_idx];
			array[min_idx] = tmp;

			print_array(array, size);
		}
	}
}
