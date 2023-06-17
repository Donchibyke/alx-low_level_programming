#include <stdio.h>
/**
 * main - A project that prints the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	fprintf(stdout, "size of a char: %lu byte(s)\n", sizeof(char));
	fprintf(stdout, "size of an int: %lu byte(s)\n", sizeof(int));
	fprintf(stdout, "size of a long int: %lu byte(s)\n", sizeof(long int));
	fprintf(stdout, "size of a long long int: %lu byte(s)\n", sizeof(long long int));
	fprintf(stdout, "size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
