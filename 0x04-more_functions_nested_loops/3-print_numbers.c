#include "main.h"

/**
 * main - A function that prints numbers from 0 - 9
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
