#include "main.h"
/**
 * swap_int - swap the values of two integers a and b
 * @a: integer a
 * @b: integer b
 * Return: always 0.
 */

void swap_int(int *a, int *b)
{
int f;
f = *a;
*a = *b;
*b = f;
}
