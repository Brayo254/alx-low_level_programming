#include "main.h"
/**
*print_alphabet_x10 -> prints 10 times the alphabet in lowercase.
*/

void print_alphabet_x10(void)
{
	int p;
	int b;
	
	for (b = 0; b < 10; b++)
	{
	for (p = 'a'; p <= 'z'; p++)
	{
	_putchar(p);
	}
	_putchar('\n');
	}
}
