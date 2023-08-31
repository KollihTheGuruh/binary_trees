binary_trees
by Michael Mutinda and Annah Njuguna

General

What is a binary tree
What is the difference between a binary tree and a Binary Search Tree
What is the possible gain in terms of time complexity compared to linked lists
What are the depth, the height, the size of a binary tree
What are the different traversal methods to go through a binary tree
What is a complete, a full, a perfect, a balanced binary tree

Requirements

General

Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project, is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
You are allowed to use the standard library
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions should be included in your header file called binary_trees.h
Don’t forget to push your header file
All your header files should be include guarded

Tasks

0. New node
Write a function that creates a binary tree node

Prototype: binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
Where parent is a pointer to the parent node of the node to create
And value is the value to put in the new node
When created, a node does not have any child
Your function must return a pointer to the new node, or NULL on failure

1. Insert left
mandatory
Write a function that inserts a node as the left-child of another node

Prototype: binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
Where parent is a pointer to the node to insert the left-child in
And value is the value to store in the new node
Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
If parent already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

2. Insert right
mandatory
Write a function that inserts a node as the right-child of another node

Prototype: binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
Where parent is a pointer to the node to insert the right-child in
And value is the value to store in the new node
Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
If parent already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.

3. Delete
mandatory
Write a function that deletes an entire binary tree

Prototype: void binary_tree_delete(binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to delete
If tree is NULL, do nothing

4. Is leaf
mandatory
Write a function that checks if a node is a leaf

Prototype: int binary_tree_is_leaf(const binary_tree_t *node);
Where node is a pointer to the node to check
Your function must return 1 if node is a leaf, otherwise 0
If node is NULL, return 0

5. Is root
mandatory
Write a function that checks if a given node is a root

Prototype: int binary_tree_is_root(const binary_tree_t *node);
Where node is a pointer to the node to check
Your function must return 1 if node is a root, otherwise 0
If node is NULL, return 0

6. Pre-order traversal
mandatory
Write a function that goes through a binary tree using pre-order traversal

Prototype: void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
Where tree is a pointer to the root node of the tree to traverse
And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
If tree or func is NULL, do nothing

7. In-order traversal
mandatory
Write a function that goes through a binary tree using in-order traversal

Prototype: void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
Where tree is a pointer to the root node of the tree to traverse
And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
If tree or func is NULL, do nothing

8. Post-order traversal
mandatory
Write a function that goes through a binary tree using post-order traversal

Prototype: void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
Where tree is a pointer to the root node of the tree to traverse
And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
If tree or func is NULL, do nothing

9. Height
mandatory
Write a function that measures the height of a binary tree

Prototype: size_t binary_tree_height(const binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to measure the height.
If tree is NULL, your function must return 0

10. Depth
mandatory
Write a function that measures the depth of a node in a binary tree

Prototype: size_t binary_tree_depth(const binary_tree_t *tree);
Where tree is a pointer to the node to measure the depth
If tree is NULL, your function must return 0

11. Size
mandatory
Write a function that measures the size of a binary tree

Prototype: size_t binary_tree_size(const binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to measure the size
If tree is NULL, the function must return 0

12. Leaves
mandatory
Write a function that counts the leaves in a binary tree

Prototype: size_t binary_tree_leaves(const binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to count the number of leaves
If tree is NULL, the function must return 0
A NULL pointer is not a leaf

13. Nodes
mandatory
Write a function that counts the nodes with at least 1 child in a binary tree

Prototype: size_t binary_tree_nodes(const binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to count the number of nodes
If tree is NULL, the function must return 0
A NULL pointer is not a node

14. Balance factor
mandatory
Write a function that measures the balance factor of a binary tree

Prototype: int binary_tree_balance(const binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to measure the balance factor
If tree is NULL, return 0

15. Is full
mandatory
Write a function that checks if a binary tree is full

Prototype: int binary_tree_is_full(const binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to check
If tree is NULL, your function must return 0

16. Is perfect
mandatory
Write a function that checks if a binary tree is perfect

Prototype: int binary_tree_is_perfect(const binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to check
If tree is NULL, your function must return 0

17. Sibling
mandatory
Write a function that finds the sibling of a node

Prototype: binary_tree_t *binary_tree_sibling(binary_tree_t *node);
Where node is a pointer to the node to find the sibling
Your function must return a pointer to the sibling node
If node is NULL or the parent is NULL, return NULL
If node has no sibling, return NULL

18. Uncle
mandatory
Write a function that finds the uncle of a node

Prototype: binary_tree_t *binary_tree_uncle(binary_tree_t *node);
Where node is a pointer to the node to find the uncle
Your function must return a pointer to the uncle node
If node is NULL, return NULL
If node has no uncle, return NULL

19. Lowest common ancestor
#advanced
Write a function that finds the lowest common ancestor of two nodes

Prototype: binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);
Where first is a pointer to the first node
And second is a pointer to the second node
Your function must return a pointer to the lowest common ancestor node of the two given nodes
If no common ancestor was found, your function must return NULL

20. Level-order traversal
#advanced
Write a function that goes through a binary tree using level-order traversal

Prototype: void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
Where tree is a pointer to the root node of the tree to traverse
And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
If tree or func is NULL, do nothing

21. Is complete
#advanced
Write a function that checks if a binary tree is complete

Prototype: int binary_tree_is_complete(const binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to check
If tree is NULL, your function must return 0

22. Rotate left
#advanced
Write a function that performs a left-rotation on a binary tree

Prototype: binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to rotate
Your function must return a pointer to the new root node of the tree once rotated

23. Rotate right
#advanced
Write a function that performs a right-rotation on a binary tree

Prototype: binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to rotate
Your function must return a pointer to the new root node of the tree once rotated

24. Is BST
#advanced
Write a function that checks if a binary tree is a valid Binary Search Tree

Prototype: int binary_tree_is_bst(const binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to check
Your function must return 1 if tree is a valid BST, and 0 otherwise
If tree is NULL, return 0
Properties of a Binary Search Tree:

The left subtree of a node contains only nodes with values less than the node’s value
The right subtree of a node contains only nodes with values greater than the node’s value
The left and right subtree each must also be a binary search tree
There must be no duplicate values

25. BST - Insert
#advanced
Write a function that inserts a value in a Binary Search Tree

Prototype: bst_t *bst_insert(bst_t **tree, int value);
Where tree is a double pointer to the root node of the BST to insert the value
And value is the value to store in the node to be inserted
Your function must return a pointer to the created node, or NULL on failure
If the address stored in tree is NULL, the created node must become the root node.
If the value is already present in the tree, it must be ignored
Your file 0-binary_tree_node.c will be compile during the correction

26. BST - Array to BST
#advanced
Write a function that builds a Binary Search Tree from an array

Prototype: bst_t *array_to_bst(int *array, size_t size);
Where array is a pointer to the first element of the array to be converted
And size is the number of element in the array
Your function must return a pointer to the root node of the created BST, or NULL on failure
If a value of the array is already present in the tree, this value must be ignored
Your files 111-bst_insert.c and 0-binary_tree_node.c will be compiled during the correction

27. BST - Search
#advanced
Write a function that searches for a value in a Binary Search Tree

Prototype: bst_t *bst_search(const bst_t *tree, int value);
Where tree is a pointer to the root node of the BST to search
And value is the value to search in the tree
Your function must return a pointer to the node containing a value equals to value
If tree is NULL or if nothing is found, your function must return NULL

28. BST - Remove
#advanced
Write a function that removes a node from a Binary Search Tree

Prototype: bst_t *bst_remove(bst_t *root, int value);
Where root is a pointer to the root node of the tree where you will remove a node
And value is the value to remove in the tree
Once located, the node containing a value equals to value must be removed and freed
If the node to be deleted has two children, it must be replaced with its first in-order successor (not predecessor)
Your function must return a pointer to the new root node of the tree after removing the desired value

29. Big O #BST
#advanced
What are the average time complexities of those operations on a Binary Search Tree (one answer per line):

Inserting the value n
Removing the node with the value n
Searching for a node in a BST of size n

30. Is AVL
#advanced
Write a function that checks if a binary tree is a valid AVL Tree

Prototype: int binary_tree_is_avl(const binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to check
Your function must return 1 if tree is a valid AVL Tree, and 0 otherwise
If tree is NULL, return 0
Properties of an AVL Tree:

An AVL Tree is a BST
The difference between heights of left and right subtrees cannot be more than one
The left and right subtrees must also be AVL trees

31. AVL - Insert
#advanced
Write a function that inserts a value in an AVL Tree

Prototype: avl_t *avl_insert(avl_t **tree, int value);
Where tree is a double pointer to the root node of the AVL tree for inserting the value
And value is the value to store in the node to be inserted
Your function must return a pointer to the created node, or NULL on failure
If the address stored in tree is NULL, the created node must become the root node.
The resulting tree after insertion, must be a balanced AVL Tree
Your files 14-binary_tree_balance.c, 103-binary_tree_rotate_left.c, 104-binary_tree_rotate_right.c and 0-binary_tree_node.c will be compiled during the correction

32. AVL - Array to AVL
#advanced
Write a function that builds an AVL tree from an array

Prototype: avl_t *array_to_avl(int *array, size_t size);
Where array is a pointer to the first element of the array to be converted
And size is the number of element in the array
Your function must return a pointer to the root node of the created AVL tree, or NULL on failure
If a value of the array is already present in the tree, this value must be ignored
Your files 121-avl_insert.c, 0-binary_tree_node.c, 14-binary_tree_balance.c, 103-binary_tree_rotate_left.c and 104-binary_tree_rotate_right.c will be compiled during the correction

33. AVL - Remove
#advanced
Write a function that removes a node from an AVL tree

Prototype: avl_t *avl_remove(avl_t *root, int value);
Where root is a pointer to the root node of the tree for removing a node
And value is the value to remove in the tree
Once located, the node containing a value equals to value must be removed and freed
If the node to be deleted has two children, it must be replaced with its first in-order successor (not predecessor)
After deletion of the desired node, the tree must be rebalanced if necessary
Your function must return a pointer to the new root node of the tree after removing the desired value, and after rebalancing
Your files 14-binary_tree_balance.c, 103-binary_tree_rotate_left.c and 104-binary_tree_rotate_right.c will be compiled during the correction

34. AVL - From sorted array
#advanced
Write a function that builds an AVL tree from an array

Prototype: avl_t *sorted_array_to_avl(int *array, size_t size);
Where array is a pointer to the first element of the array to be converted
And size is the number of element in the array
Your function must return a pointer to the root node of the created AVL tree, or NULL on failure
You can assume there will be no duplicate value in the array
You are not allowed to rotate
You can only have 2 functions in your file
Your file 0-binary_tree_node.c will be compiled during the correction

35. Big O #AVL Tree
#advanced
What are the average time complexities of those operations on an AVL Tree (one answer per line):

Inserting the value n
Removing the node with the value n
Searching for a node in an AVL tree of size n

36. Is Binary heap
#advanced
Write a function that checks if a binary tree is a valid Max Binary Heap

Prototype: int binary_tree_is_heap(const binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to check
Your function must return 1 if tree is a valid Max Binary Heap, and 0 otherwise
If tree is NULL, return 0
Properties of a Max Binary Heap:

It’s a complete tree
In a Max Binary Heap, the value at root must be maximum among all values present in Binary Heap
The last property must be recursively true for all nodes in Binary Tree

37. Heap - Insert
#advanced
Write a function that inserts a value in Max Binary Heap

Prototype: heap_t *heap_insert(heap_t **root, int value)
Where root is a double pointer to the root node of the Heap to insert the value
And value is the value to store in the node to be inserted
Your function must return a pointer to the created node, or NULL on failure
If the address stored in root is NULL, the created node must become the root node.
You have to respect a Max Heap ordering
You are allowed to have up to 6 functions in your file
Your file 0-binary_tree_node.c will be compiled during the correction

38. Heap - Array to Binary Heap
#advanced
Write a function that builds a Max Binary Heap tree from an array

Prototype: heap_t *array_to_heap(int *array, size_t size);
Where array is a pointer to the first element of the array to be converted
And size is the number of element in the array
Your function must return a pointer to the root node of the created Binary Heap, or NULL on failure
Your files 131-heap_insert.c and 0-binary_tree_node.c will be compiled during the correction

39. Heap - Extract
#advanced
Write a function that extracts the root node of a Max Binary Heap

Prototype: int heap_extract(heap_t **root);
Where root is a double pointer to the root node of heap
Your function must return the value stored in the root node
The root node must be freed and replace with the last level-order node of the heap
Once replaced, the heap must be rebuilt if necessary
If your function fails, return 0

40. Heap - Sort
#advanced
Write a function that converts a Binary Max Heap to a sorted array of integers

Prototype: int *heap_to_sorted_array(heap_t *heap, size_t *size);
Where heap is a pointer to the root node of the heap to convert
And size is an address to store the size of the array
You can assume size is a valid address
Since we are using Max Heap, the returned array must be sorted in descending order
Your file 133-heap_extract.c will be compile during the correction


