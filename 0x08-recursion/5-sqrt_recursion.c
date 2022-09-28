#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * square root
 * Return: If no natural square root, return -1. Else return natural
 */

int _sqrt_recursion(int n)
{
	int square = 2;

	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	return (is_sqrt(n, square));
}

/**
 * halp - helper function to solve _sqrt_recursion
 * @c: number to determine if square root
 * @i: incrementer to compare against `c`
 * Return: square root if natural square root, or -1 if none found
 */
int is_sqrt(int n, int square)
{
	if (square * square == n)
		return (square);
	else if (square * square < n)
		return (is_sqrt(n, square + 1));
	else if (square * square > n)
		return (-1);
	return (-1);
}
