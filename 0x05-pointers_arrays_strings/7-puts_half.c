#include "main.h"

/**
 * puts_half - prints second half od a string
 * @str: string to be modified
 * Return: Always(success)
 */

void puts_half(char *str)
{
	int i = 0;
	int n;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 1)
	{
		n = (i - 1) / 2;
		n += 1;
	}
	else
	{
		n = i / 2;
	}

	for (; n < i; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
