#include "binary_trees.h"

/**
 * bst_remove - Removes a node with the specified value from the BST.
 * @root: Pointer to the root node of the binary search tree.
 * @value: The value to be removed from the tree.
 *
 * Return: A pointer to the root of the updated tree after removal.
 */
bst_t *bst_remove(bst_t *root, int value)
{
	return (bst_remove_recursive(root, root, value));
}

/**
 * bst_remove_recursive - Removes a node from a binary search tree recursively.
 * @root: Pointer to the root of the binary search tree.
 * @node: Pointer to the current node being checked.
 * @value: Value to be removed from the binary search tree.
 *
 * This function recursively searches for the node with the specified value
 * and removes it from the BST while maintaining the BST property.
 *
 * Return: Pointer to the root of the modified binary search tree.
 */
bst_t *bst_remove_recursive(bst_t *root, bst_t *node, int value)
{
	if (node != NULL)
	{
		if (node->n == value)
			return (bst_delete(root, node));
		if (node->n > value)
			return (bst_remove_recursive(root, node->left, value));
		return (bst_remove_recursive(root, node->right, value));
	}
	return (NULL);
}

/**
 * bst_delete - Delete a node from a binary search tree.
 * @root: Pointer to the root node of the tree.
 * @node: Pointer to the node to be deleted.
 *
 * This function deletes a node from a binary search tree rooted at 'root'
 * and returns the new root of the tree after deletion.
 *
 * Return: A pointer to the new root node after deletion.
 */
bst_t *bst_delete(bst_t *root, bst_t *node)
{
	bst_t *parent = node->parent, *successor = NULL;

	/* No children or right-child only */
	if (node->left == NULL)
	{
		if (parent != NULL && parent->left == node)
			parent->left = node->right;
		else if (parent != NULL)
			parent->right = node->right;
		if (node->right != NULL)
			node->right->parent = parent;
		free(node);
		return (parent == NULL ? node->right : root);
	}

	/* Left-child only */
	if (node->right == NULL)
	{
		if (parent != NULL && parent->left == node)
			parent->left = node->left;
		else if (parent != NULL)
			parent->right = node->left;
		if (node->left != NULL)
			node->left->parent = parent;
		free(node);
		return (parent == NULL ? node->left : root);
	}

	/* Two children */
	successor = inorder_successor(node->right);
	node->n = successor->n;

	return (bst_delete(root, successor));
}

/**
 * inorder_successor - Find the inorder successor in a binary search tree.
 * @root: Pointer to the root of the binary search tree.
 *
 * This function takes the root of a binary search tree and returns
 * a pointer to the inorder successor node of the given node.
 *
 * Return: Pointer to the inorder successor node, or NULL if not found.
 */
bst_t *inorder_successor(bst_t *root)
{
	while (root->left != NULL)
		root = root->left;
	return (root);
}
