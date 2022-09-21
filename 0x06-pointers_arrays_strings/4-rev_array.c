#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @n: number of elements of the array
 * @a: an array of integers
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int low, high, tmp;

	for (low = 0, high = n - 1; low < high; low++, high--)
	{
		tmp = a[low];
		a[low] = a[high];
		a[high] = tmp;
	}
}
