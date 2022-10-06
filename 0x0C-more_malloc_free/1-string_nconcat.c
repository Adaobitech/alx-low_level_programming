#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: a pointer else Null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[j] != '\0')
	{
		j++;
	}
	while (s2[k] != '\0')
	{
		k++;
	}

	if (n > k)
	n = k;
	p = malloc((j + n + 1) * sizeof(char));

	if (p == NULL)
		return (0);

	for (i = 0; i < j; i++)
	{
		p[i] = s1[i];
	}

	for (; i < (j + n); i++)
	{
		p[i] = s2[i - j];
	}
	p[i] = '\0';
	return (p);
}
