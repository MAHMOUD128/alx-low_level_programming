#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - allocat a 2d array
  * @width: width of array
  * @height: height of array
  *
  * Return: pointer to 2d array, NULL on failure
  */
int **alloc_grid(int width, int height)
{
	if (width > 0 && height > 0)
	{
		int **grid = (int **)malloc(height * sizeof(int *)), i, j;

		if (grid != (void *)'\0')
		{
			for (i = 0; i < height; i++)
			{
				grid[i] = (int *)malloc(width * sizeof(int));
				if (grid[i] == (void *)'\0')
				{
					while (i--)
					{
						free(grid[i]);
					}
					free(grid);
					return ((void *)'\0');
				}
			}
			for (i = 0; i < height; i++)
			{
				for (j = 0; j < width; j++)
				{
					grid[i][j] = 0;
				}
			}
			return (grid);
		}
		else
		{
			return (grid);
		}
	}
	else
	{
		return ((void *)'\0');
	}
}
