#include "binary_trees.h"

/**
 * avl_remove - Removes a node with a specific value from an AVL tree.
 * @root: Pointer to the root of the AVL tree.
 * @value: Value to be removed from the AVL tree.
 *
 * This function removes a node with the specified value from the AVL tree
 * and rebalances the tree if necessary.
 *
 * Return: Pointer to the root of the updated AVL tree.
 *
 */
avl_t *avl_remove(avl_t *root, int value)
{
	avl_t *root_a = (avl_t *) bst_remove((bst_t *) root, value);

	if (root_a == NULL)
		return (NULL);
	bal(&root_a);

	return (root_a);
}

/**
 * bst_remove - Remove a node with specified value from a binary search tree.
 *
 * Function takes the root of a binary search tree and a value to be removed.
 * If a node with the given value exists in the tree, it will be removed while
 * maintaining the binary search tree properties.
 *
 * @root:  A pointer to the root of the binary search tree.
 * @value: The value to be removed from the tree, if it exists.
 *
 * Return: A pointer to the root of the modified tree after removal.
 */
bst_t *bst_remove(bst_t *root, int value)
{
	int type = 0;

	if (root == NULL)
		return (NULL);
	if (value < root->n)
		bst_remove(root->left, value);
	else if (value > root->n)
		bst_remove(root->right, value);
	else if (value == root->n)
	{
		type = remove_type(root);
		if (type != 0)
			bst_remove(root->right, type);
	}
	else
		return (NULL);
	return (root);
}

/**
 * remove_type -  Removes a node of a specific type from a binary search tree.
 * @root: Pointer to the root node of the binary search tree.
 *
 * This function removes a node of a specific type from the binary search tree
 * rooted at 'root'. It returns an integer value indicating success (0) or
 * failure (-1).
 *
 * Return: 0 if it has no children or other value if it has
 */
int remove_type(bst_t *root)
{
	int new_value = 0;

	if (!root->left && !root->right)
	{
		if (root->parent->right == root)
			root->parent->right = NULL;
		else
			root->parent->left = NULL;
		free(root);
		return (0);
	}
	else if ((!root->left && root->right) || (!root->right && root->left))
	{
		if (!root->left)
		{
			if (root->parent->right == root)
				root->parent->right = root->right;
			else
				root->parent->left = root->right;
			root->right->parent = root->parent;
		}
		if (!root->right)
		{
			if (root->parent->right == root)
				root->parent->right = root->left;
			else
				root->parent->left = root->left;
			root->left->parent = root->parent;
		}
		free(root);
		return (0);
	}
	else
	{
		new_value = successor(root->right);
		root->n = new_value;
		return (new_value);
	}
}

/**
 * successor - Find the successor node in a binary search tree.
 * @node: Pointer to the node for which to find the successor.
 *
 * This function finds the inorder successor of the given node in a binary
 * search tree.
 *
 * Return: Pointer to the inorder successor node, or NULL if no successor
 *         exists for the given node.
 */
int successor(bst_t *node)
{
	int left = 0;

	if (node == NULL)
	{
		return (0);
	}
	else
	{
		left = successor(node->left);
		if (left == 0)
		{
			return (node->n);
		}
		return (left);
	}
}

/**
 * bal - Perform AVL tree balancing.
 * @tree: Pointer to the root of the AVL tree.
 *
 * This function performs AVL tree balancing to maintain the AVL property.
 *
 * Return: Balanced factor.
 */
void bal(avl_t **tree)
{
	int bval;

	if (tree == NULL || *tree == NULL)
		return;
	if ((*tree)->left == NULL && (*tree)->right == NULL)
		return;
	bal(&(*tree)->left);
	bal(&(*tree)->right);
	bval = binary_tree_balance((const binary_tree_t *)*tree);
	if (bval > 1)
		*tree = binary_tree_rotate_right((binary_tree_t *)*tree);
	else if (bval < -1)
		*tree = binary_tree_rotate_left((binary_tree_t *)*tree);
}
