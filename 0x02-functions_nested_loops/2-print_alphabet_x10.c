#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	char x;
	int y = 0;

	while (y <= 9)
	{
	for (x = 'a'; x <= 'z'; x++)
	{
	_putchar(x);
	}
	_putchar('\n');
	y++;
	}
}
