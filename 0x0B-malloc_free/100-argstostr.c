#include "main.h"

/**
 * argstostr - concatenates all arguments of a string
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to new string, Null if fails
 */

char *argstostr(int ac, char **av)
{
	char *a;
	int b, i, j, c;

	if (ac == 0)
		return (NULL);

	for (b = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			b++;
		b++;
	}

	a = malloc((b + 1) * sizeof(char));

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = j = c = 0; c < b; j++, c++)
	{
		if (av[i][j] == '\0')
		{
			a[c] = '\n';
			i++;
			c++;
			j = 0;
		}
		if (c < b - 1)
			a[c] = av[i][j];
	}
	a[c] = '\0';
	return (a);
}
