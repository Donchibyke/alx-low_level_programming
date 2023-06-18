#include <stdio.h>
/**
 * main - A [program that prints alphabet in lowercas
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
		}
	putchar('\n');
	return (0);
}
