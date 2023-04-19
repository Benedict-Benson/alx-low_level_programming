#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - parameter on each element of an array
 * @array: array
 * @size: size
 * @action: pointer  action
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
