#include "main.h"

/**
 * more_numbers - Program to print 0 to 14 ten times
 *
 * Return: 0 for success
 */

void more_numbers(void)
{
	int num, count;

	for (count = 0; count < 10; count++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
				_putchar('0' + num / 10);
			_putchar('0' + num % 10);

		}
		_putchar('\n');
	}
}

