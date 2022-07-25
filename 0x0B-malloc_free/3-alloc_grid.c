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
	int i, j, size;
	int **tab;

	if (width > 0 && height > 0)
	{
		tab = (int **) malloc(sizeof(*tab) * width);
		if (tab != NULL)
		{
			for (i = 0; i < width; i++)
			{
				tab[i] = (int *) malloc(sizeof(**tab) * height);
				if (tab[i] != NULL)
				{
					for (j = 0; j < height; j++)
						tab[i][j] = 0;
				}
			}
			return (tab);
		}
	}
	return (NULL);
}
