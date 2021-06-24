#include "holberton.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
int h, index;
if (size > 0)
{
for (h = 1; h <= size; h++)
{
for (index = size - h; index > 0; index--)
_putchar(' ');
for (index = 0; index < h; index++)
_putchar('#');
if (h == size)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
