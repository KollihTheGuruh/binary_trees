#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 *
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is complete, 0 otherwise.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	binary_tree_t **queue = malloc(sizeof(binary_tree_t *)
									* binary_tree_size(tree));

	if (queue == NULL)
		return (0);

	int front = 0, rear = 0;
	int has_null_child = 0; /* Flag to check for incomplete level */

	queue[rear] = (binary_tree_t *)tree;
	rear++;
	while (front < rear)
	{
		binary_tree_t *current = queue[front];

		front++;

		if (current == NULL)
		{
			has_null_child = 1;
		}
		else
		{
			if (has_null_child)
			{
				free(queue); /* Free the queue */
				return (0);
			}
			queue[rear] = current->left;
			rear++;

			queue[rear] = current->right;
			rear++;
		}
	}
	free(queue); /* Free the queue */
	return (1);
}
