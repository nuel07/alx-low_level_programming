#include <stdio.h>
/**
 *main - entry point
 * Return: 0 to stop the program
 */
int main(void)
{
char h;
for (h = 'a' ; h <= 'z' ; h++)
{
if (h != 'e' && h != 'q')
{
putchar(h);
}
}
putchar('\n');
return (0);
}
