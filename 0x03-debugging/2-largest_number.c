#include "main.h"

/**
 * main - tests function that prints if integer is positive or negative
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: zero
 */
int largest_number(int a, int b, int c)
{
int largest;

if (a > b && a > c)
	{
		largest = a;
	}
else if (a > b && c > b)
	{
		largest = c;
	}
else if (b > c)
	{
		largest = b;
	}
else
	{
		largest = c;
	}

return (largest);
}

