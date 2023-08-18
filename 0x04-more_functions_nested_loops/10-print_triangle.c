#include "main.h"
/**
* print_triangle - prints a triangle
* @size:size parameter of triangle
* Return:returns absolutely nothing
* Auth: Kola Oyeyemi 
*/
void print_triangle(int size)
{
int incLen1, incBre2;

if (size > 0)
{
for (incLen1 = 1; incLen1 <= size; incLen1++)
{
for ((incBre2 = size - incLen1); incBre2 > 0; incBre2--)
_putchar(' ');

for (incBre2 = 0; incBre2 < incLen1; incBre2++)
_putchar('#');

if (incLen1 == size)
continue;

_putchar('\n');
}
}
_putchar('\n');
}
