#include"main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: An integer to swap
 * @b: Another integer to swap
 *
 * Return: Always return 0
 */
void swap_int(int *a, int *b)
{
	int change;

	change = *a;
	*a = *b;
	*b = change;
}
