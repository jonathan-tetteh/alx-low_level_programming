#include "main.h"

/**
 * main - A function that prints numbers from 0 - 9 exlcuding 2&4.
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (!(i == 2 || i == 4))
			_putchar(i);
	}
	_putchar('\n');
}
