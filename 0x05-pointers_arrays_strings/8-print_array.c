#include <stdio.h>
#include "main.h"
/**
* print_array - prints array elements
* @a: pointer to array
* @n: number
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
	if (i != 0)
	{
	printf(", ");
	}
	printf("%d", a[i]);
	i++;
	}
	printf("\n");
}
