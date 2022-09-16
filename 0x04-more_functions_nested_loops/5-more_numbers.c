#include "main.h"

/**
 * more_numbers - function to print numbers 0 to 14 ten times.
 */
void more_numbers(void)
{
	int cnt1, cnt2;

	for (cnt1 = 1; cnt1 <= 10; cnt1++)
	{
		for (cnt2 = 0; cnt2 <= 14; cnt2++)
		{
			_putchar(cnt2 + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
