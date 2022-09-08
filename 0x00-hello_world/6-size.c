#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main (void)
{
	char c;
	int i;
	long int l;
	long long int k;
	float f;

	printf("Size of an char is: %d byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a int is: %d byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int is: %d byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int is: %d byte(s)\n", (unsigned long)sizeof(k));
	printf("Size of a float is: %d byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
