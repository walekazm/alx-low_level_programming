#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
printf("Size of an char is: %lu byte(s)\n", sizeof(char));
printf("Size of a int is: %lu byte(s)\n", sizeof(int));
printf("Size of a long int is: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int is: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float is: %lu byte(s)\n", sizeof(float));
return (0);
}
