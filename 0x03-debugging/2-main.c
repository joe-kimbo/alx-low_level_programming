#include "main.h"

/**
 * largest_number - returns the largest number
 * @a: the first integer
 * @b: the second integer
 * @c: the third integer
 * Return: the largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
