#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - create a 2d integer grid using malloc.
 * Description: Each element of the grid should be initialized to 0.
 * @width: int size width
 * @height: int size height
 * Return: Pointer to new grid
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **tab;

	if (width > 0 && height > 0)
	{
		tab = (int **) malloc(sizeof(*tab) * height);
		if (tab != NULL)
		{
			for (i = 0; i < height; i++)
			{
				tab[i] = (int *) malloc(sizeof(**tab) * width);
				if (tab[i] != NULL)
				{
					for (j = 0; j < width; j++)
						tab[i][j] = 0;
				}
				else
				{
					for (i = i - 1; i >= 0; i--)
						free(tab[i]);
					free(tab);
					return (NULL);
				}
			}
			return (tab);
		}
	}
	return (NULL);
}
