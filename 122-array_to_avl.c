#include "binary_trees.h"

/**
 * array_to_avl - function that builds an AVL tree from an array.
 * @array: pointer to the first element of the array to be converted.
 * @size: number of element in the array.
 *
 * Return: function must return a pointer to
 * the root node of the created AVL tree, or NULL on failure.
 */
avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *tree = NULL;
	size_t x, y;

	if (array == NULL)
		return (NULL);

	for (i = 0; x < size; x++)
	{
		for (y = 0; y < x; y++)
		{
			if (array[j] == array[x])
				break;
		}
		if (y == x)
		{
			if (avl_insert(&tree, array[x]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
