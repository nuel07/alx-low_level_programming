#include <stdio.h>
/**
 *main - to print all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
int h;
for (h = '0' ; h <= '9'; h++)
{
putchar(h);
}
putchar('\n');
return (0);
}
