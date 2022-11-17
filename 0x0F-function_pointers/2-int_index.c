#include <stdio.h>
#include "function_pointers.h"

/**
 *  int_index -  searches for an integer
 *   @array: array to search int in
 *   @size: the array size
 *   @cmp: pointer to the comparing function
 *   Return: index of the first element for which
 *    cmp function does not return 0, or -1
 *    if no match is found or size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
		return (-1);
	}
}
