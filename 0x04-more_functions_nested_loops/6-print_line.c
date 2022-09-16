#include "main.h"

/**
 * print_line - draw a straight line
 * @num: number of times underscore is printed
 * Description: Can only use _putchar to print
 */
void print_line(int num)
{
	int line;

	line = 1;
	while (line <= num)
	{
		if (num <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}

		line++;
	}
	_putchar('\n');
}
