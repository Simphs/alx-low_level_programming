#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: empty output
*/

void times_table(void)

{


	int x, y, z, u;

	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	z =x * y;
	if (z - u) /10
	{
	u = z % 10;
	d = (z - u) / 10;
	for (c = 0; c <= 5; c++)
	{
	for (d = 0; d <= 9; d++)
	{
	_putchar(44);
	_putchar(32);
	_putchar(d + '0');
	_putchar(u + '0');
	}
	else
	{
	if (y != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(z + '0');
	}
	}
	_putchar('\n");
	}
}

