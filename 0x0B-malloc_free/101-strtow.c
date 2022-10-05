#include "main.h"

/**
 * dfree_grid - frees a 2 dimensional array
 * @grid: multidimentional array
 * @height: height og array
 * Return: Nothing
 */

void dfree_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits string into two words
 * @str: String
 * Return: Null if str is null, a pointer of an array if success
 */

char **strtow(char *str)
{
	char **a;
	unsigned int c, height, i, j, b;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	a = malloc((height + 1) * sizeof(char *));
	if (a == NULL || height == 0)
	{
		free(a);
		return (NULL);
	}
	for (i = b = 0; i < height; i++)
	{
		for (c = b; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				b++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				a[i] = malloc((c - b + 2) * sizeof(char));
				if (a[i] == NULL)
				{
					dfree_grid(a, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; b <= c; b++, j++)
			a[i][j] = str[b];
		a[i][j] = '\0';
	}
	a[i] = NULL;
	return (a);
}
