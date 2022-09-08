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

	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of a double is: %lu.\n", (unsigned long)sizeof(d));
	printf("The size of a char is: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of a float is: %lu.\n", (unsigned long)sizeof(f));
	printf("The size of a long int is: %lu.\n", (unsigned long)sizeof(l));
	printf("The size of a long long int is: %lu.\n", (unsigned long)sizeof(k));

	return (0);
}
