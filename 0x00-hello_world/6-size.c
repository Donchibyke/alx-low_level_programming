#include <stdio.h>
/**
 * main - A project that prints the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	write(stderr, "size of a char: %lu byte(s)\n", sizeof(char));
	write(stderr, "size of an int: %lu byte(s)\n", sizeof(int));
	write(stderr, "size of a long int: %lu byte(s)\n", sizeof(long int));
	write("size of a long long int: %lu byte(s)\n", sizeof(long long int));
	write(stderr, "size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
