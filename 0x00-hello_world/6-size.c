#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success) indicates program stop
 */
int main(void)
{
char c;
int int_type;
long long_type;
long long longer_type;
float f;
printf("Size of a char: %ld byte(s)\n", sizeof(c));
printf("Size of an int: %ld bytes(s)\n", sizeof(int_type));
printf("Size of a long int: %ld byte(s)\n", sizeof(long_type));
printf("Size of a long long int %ld byte(s)\n", sizeof(longer_type));
printf("Size of a float: %ld byte(s)\n", sizeof(f));
return (0);
}
