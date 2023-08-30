#include "binary_trees.h"

/**
 * sorted_array_to_avl - Converts a sorted integer array to an AVL tree.
 *
 * @array: A pointer to the sorted integer array.
 * @size: The number of elements in the array
 * This function takes a sorted integer array and its size and constructs
 * an AVL (Adelson-Velsky and Landis) tree using the elements from the array.
 * The resulting AVL tree is balanced and maintains the sorted order of the
 * input array.
 *
 * Return: A Pointer to the root of the constructed AVL tree, or NULL if
 *         the array is empty.
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	if (array == NULL || size == 0)
		return (NULL);
	return (aux_sort(NULL, array, 0, ((int)(size)) - 1));
}

/**
 * aux_sort - Recursively sorts an array into an AVL tree.
 *
 * @parent: Pointer to the parent node of the current subtree.
 * @array: Pointer to the array to be sorted.
 * @begin: Index of the first element in the current subtree.
 * @last: Index of the last element in the current subtree.
 * This function recursively constructs an AVL tree from the given array
 * elements within the specified range, and returns a pointer to the root
 * of the constructed AVL tree.
 * Return: Pointer to the root of the constructed AVL tree.
 */
avl_t *aux_sort(avl_t *parent, int *array, int begin, int last)
{
	avl_t *root;
	binary_tree_t *aux;
	int mid = 0;

	if (begin <= last)
	{
		mid = (begin + last) / 2;
		aux = binary_tree_node((binary_tree_t *)parent, array[mid]);
		if (aux == NULL)
			return (NULL);
		root = (avl_t *)aux;
		root->left = aux_sort(root, array, begin, mid - 1);
		root->right = aux_sort(root, array, mid + 1, last);
		return (root);
	}
	return (NULL);
}
