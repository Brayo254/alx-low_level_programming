#include "main.h"
/**
*print_alphabet - prints the alphabet, in lowercase, followed by a new line.
*Return: On success 0.
*/

void print_alphabet(void)
{
	int p;

	for (p = 'a'; p <= 'z'; p++)
	{
		_putchar(p);
	}
	_putchar('\n');
}
