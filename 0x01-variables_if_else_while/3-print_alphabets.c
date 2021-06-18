#include <stdio.h>
/**
 *main - entry point
 * Return: 0 to stop the program
 */
int main(void)
{
char p;
for (p = 'a' ; p <= 'z' ; p++)
{
putchar(p);
}
for (p = 'A' ; p <= 'Z' ; p++)
{
putchar(p);
}
putchar('\n');
return (0);
}
