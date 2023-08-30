#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left-rotation on a binary tree node.
 *
 * @tree: A pointer to the root node of the binary tree to be rotated.
 *  Description:
 * This function performs a left rotation on the binary tree rooted at 'tree'.
 * It reassigns pointers to nodes in such a way that the right child of 'tree'
 * becomes the new root, and 'tree' becomes the left child of the new root.
 * The original left child of new root becomes the new right child of 'tree'.
 * This operation maintains the binary search tree property.
 * Return: A pointer to the new root node after rotation.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{

	binary_tree_t *pivot, *tmp;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	pivot = tree->right;
	tmp = pivot->left;
	pivot->left = tree;
	tree->right = tmp;
	if (tmp != NULL)
		tmp->parent = tree;
	tmp = tree->parent;
	tree->parent = pivot;
	pivot->parent = tmp;
	if (tmp != NULL)
	{
		if (tmp->left == tree)
			tmp->left = pivot;
		else
			tmp->right = pivot;
	}

	return (pivot);
}
