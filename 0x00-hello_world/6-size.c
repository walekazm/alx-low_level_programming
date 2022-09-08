#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main (void)
{
	int i;
	double d;
	char c;
	float f;
	long int l;
	long long int k;

	printf("Size of an int is: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a double is: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a char is: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float is: %lu byte(s)\n", (unsigned long)sizeof(f));
	printf("Size of a long int is: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int is: %lu byte(s)\n", (unsigned long)sizeof(k));
	return (0);
}
