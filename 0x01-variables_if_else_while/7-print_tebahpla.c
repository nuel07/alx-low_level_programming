#include <stdio.h>
/**
 *main - function that prints the alphabet in reverse
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'z' ; ch >= 'a' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
