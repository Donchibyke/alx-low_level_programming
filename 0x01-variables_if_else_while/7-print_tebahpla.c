#include <stdio.h>
/**
 * main - A program hat prints the lowercase alphabet in reverse
 * Return: 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');
	return (0);
}
