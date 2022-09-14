#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 successful
 *
 */

int main(void)
{
	char cnt1;
	char cnt2;

	for (cnt1 = 'a'; cnt1 <= 'z'; cnt1++)
	{
		putchar(cnt1);
	}
	for (cnt2 = 'A'; cnt2 <= 'Z'; cnt2++)
	{
		putchar(cnt2);
	}

	putchar('\n');
	return (0);
}
