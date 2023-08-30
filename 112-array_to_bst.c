#include "binary_trees.h"

/**
 * array_to_bst - Convert an array of integers to a binary search tree.
 *
 * @array: The input array of integers.
 * @size: The number of elements in the array
 *
 * Return: A pointer to the root node of the binary search tree.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t index, jndex;

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
	{
		for (jndex = 0; jndex < index; jndex++)
		{
			if (array[jndex] == array[index])
				break;
		}
		if (jndex == index)
		{
			if (bst_insert(&tree, array[index]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
