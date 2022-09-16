#include "main.h"

/**
 * print_diagonal - draw a diagona line
 * @num: number of times \ is printed
 * Description: Can only use _putchar to print
 */
void print_diagonal(int num)
{
	int line, line2;

	line = 0;
	line2 = 0;

	while (line < num)
	{
		while (line2 < line)
		{
			_putchar(32);

			if (line2 == 1)
			{
				_putchar(92);
				_putchar('\n');
			}
			line2++;
		}
		line++;
	}

}
