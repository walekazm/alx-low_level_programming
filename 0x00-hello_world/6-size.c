#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main (void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

		printf("Size of an char is: %lu byte(s)\n", (unsigned long)sizeof(a));
		printf("Size of a int is: %lu byte(s)\n", (unsigned long)sizeof(b));
		printf("Size of a long int is: %lu byte(s)\n", (unsigned long)sizeof(c));
		printf("Size of a long long int is: %lu byte(s)\n", (unsigned long)sizeof(d));
		printf("Size of a float is: %lu byte(s)\n", (unsigned long)sizeof(e));
	return(0);
}
