#include "main.h"
/**
* swap_int - Swaps values of variables
* @a: First integer
* @b: Second integer
*/
void swap_int(int *a, int *b)
{
	int p = *a;

	*a = *b;
	*b = p;
}
