#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Prints out all the alphabets with an excemption of q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
