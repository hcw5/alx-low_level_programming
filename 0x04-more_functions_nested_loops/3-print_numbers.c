#include "main.h"
/**
* print_numbers - Prints 0 to 9
* Return: 0
*/
void print_numbers(void)
{
	char n;

	for (n = 0 ; n <= 9 ; n++)
	{
		_putchar(n + '0');
	}
		_putchar('\n');
}
