#include "main.h"

/**
 * print_most_numbers - print num except 2 and 4
 *
 * return: void
 */

void print_most_numbers(void)
{
	int a;

	for (a = 0; a  <= 9; a++)
	{
		if (a == 2 || a == 4)
			continue;
		_putchar(a + 48);
	}
	_putchar('\n');
}
