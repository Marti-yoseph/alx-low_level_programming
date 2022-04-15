#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: limit
 *
 * Return: nothing
 */

void print_triangles(int size)
{
int i, j;

if (size > 0)
for (i = size; i > 0; i--)
{
for (j = 1; j <= size; j++)
if (j >= i)
_putchar('#');
_putchar(' ');
else
_putchar('\n');
}
else
_putchar('\n');
}
