#include "main.h"
/**
* print_line - Prints a line
* @n: Single integer
* Return: 0
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
	for (i = 1 ; i <= n ; i++)
	{
		_putchar('_');
	}
	}
		_putchar('\n');
}
