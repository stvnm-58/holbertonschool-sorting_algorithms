#include "sort.h"

/*
 *
 *
 * se mettre au [1] du array
 * défiler jusqu'à trouver le plus petit
 * dès que le plus petit est trouvé, le stocké dans tmp
 * si un encore plus petit est trouvé : le mettre dans tmp
 *
 * une fois array complété, mets le tmp dans le premier emplacement du array
 * reparcourir le array
 *
 *
 * Un compteur pour défiler dans le tableau
 * un compteur pour dire à partir de où on commence le défilement tableau
 *
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;
	int tmp;

	/* 1. Accolades ajoutées pour éviter l'erreur d'indentation */
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

		/* 2. Comparaison entre deux size_t (min_idx et j) */
		if (min_idx != j)
		{
			/* 3. Utilisation de tmp pour le swap (règle l'erreur unused) */
			tmp = array[j];
			array[j] = array[min_idx];
			array[min_idx] = tmp;

			print_array(array, size);
		}
	}
}
