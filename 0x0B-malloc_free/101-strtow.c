#include <stdlib.h>
#include "main.h"

/**
 * count_word - A helper function to count number of words in the string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int x, y, z;

	x = 0;
	z = 0;

	for (y = 0; s[y] != '\0'; y++)
	{
		if (s[y] == ' ')
			x = 0;
		else if (x == 0)
		{
			x = 1;
			z++;
		}
	}

	return (z);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: Pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **triax, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	triax = (char **) malloc(sizeof(char *) * (words + 1));
	if (triax == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				triax[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	triax[k] = NULL;

	return (triax);
}
