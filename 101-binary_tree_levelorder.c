#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_levelorder - Traverses a
 * binary tree using level-order traversal.
 *
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

    /* Create a queue to store nodes for level-order traversal */
	binary_tree_t **queue = malloc(sizeof(binary_tree_t *)
									* binary_tree_size(tree));

	if (queue == NULL)
		return;

	int front = 0, rear = 0;

	/* Enqueue the root node */
	queue[rear] = (binary_tree_t *)tree;
	rear++;

	while (front < rear)
	{
		/* Dequeue a node and process it */
		binary_tree_t *current = queue[front];

		front++;

		func(current->n);

		/* Enqueue the left child */
		if (current->left != NULL)
		{
			queue[rear] = current->left;
			rear++;
		}

		/* Enqueue the right child */
		if (current->right != NULL)
		{
			queue[rear] = current->right;
			rear++;
		}
	}
	free(queue);
}
