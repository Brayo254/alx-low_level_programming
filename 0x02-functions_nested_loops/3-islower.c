#include "main.h"
/**
*_islower- checks if the alphabet is lowercase.
*@c_islower - character to be checked.
*Return: returns 0 or 1 based on is it is uppercase or lowercase.
*/

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
