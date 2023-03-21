#include "main.h"
/**
*_isalpha - checks if uppercase or lower
*@c: checks the letters
*Return: returns 0 or 1 based on true or false condition.
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
