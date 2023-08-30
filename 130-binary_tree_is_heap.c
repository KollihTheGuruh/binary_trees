#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_is_heap - Checks if a binary tree is a valid Max Binary Heap
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid Max Binary Heap, 0 otherwise
 */
int binary_tree_is_heap(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (!binary_tree_is_complete(tree))
		return (0);

	if (tree->left)
	{
		if (tree->n < tree->left->n)
			return (0);

		if (!binary_tree_is_heap(tree->left))
			return (0);
	}

	if (tree->right)
	{
		if (tree->n < tree->right->n)
			return (0);

		if (!binary_tree_is_heap(tree->right))
		return (0);
	}

	return (1);
}
