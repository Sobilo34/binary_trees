#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_levelorder - Function that traverses a binary
 * tree using level-order traversal
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *queue[1024]; /* Queue for level-order traversal */
	size_t front = 0, back = 0;
	binary_tree_t *present;

	if (tree == NULL || func == NULL)
		return;

	queue[back++] = (binary_tree_t *)tree; /* enqueue the root node*/

	while (front < back)
	{
		present = queue[front++];

		func(present->n);
		if (present->left != NULL)
			queue[back++] = present->left; /* Enqueue the left child */

		if (present->right != NULL)
			queue[back++] = present->right; /* Enqueue the right child */
	}
}

