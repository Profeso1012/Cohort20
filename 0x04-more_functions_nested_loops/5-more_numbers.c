#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14 ten times
 * Return: Always success
 */

void more_numbers(void)
{
	int i, j;

	for (j = 1; j <= 10; j++)
	{
	for (i = 0; i <= 14; i++)
	{
	if (i >= 10)
	{
	_putchar(i / 10 + '0');
	}
	_putchar(i % 10 + '0');
	}
	_putchar('\n');
	}
}
