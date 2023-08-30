#include "binary_trees.h"

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid Binary Search Tree.
 *
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: 1 if tree is a valid BST, and 0 otherwise.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_bst_helper(tree, INT_MIN, INT_MAX));
}

/**
 * is_bst_helper - Checks if a binary tree is a binary search tree.
 *
 * @tree: A pointer to the root node of the binary tree.
 * @low: The lower bound for the current node's value in the BST.
 * @high: The upper bound for the current node's value in the BST.
 *
 * Function is a helper function intended to be used
 * recursively to check whether
 * the binary tree satisfies the properties of
 * a binary search tree within the given range.
 *
 * Return: 1 if the tree is a valid BST within the given range, 0 otherwise.
 */
int is_bst_helper(const binary_tree_t *tree, int low, int high)
{
	if (tree != NULL)
	{
		if (tree->n < low || tree->n > high)
			return (0);
		return (is_bst_helper(tree->left, low, tree->n - 1) &&
			is_bst_helper(tree->right, tree->n + 1, high));
	}

	return (1);
}
