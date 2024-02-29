#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	binary_tree_t *queue[1024];
	size_t front = 0, back = 0;
	int flag = 0;

	if (tree == NULL)
		return (0);

	queue[back++] = (binary_tree_t *)tree;

	while (front < back)
	{
		binary_tree_t *present = queue[front++];

		if ((present->left == NULL && present->right != NULL) ||
			(flag && (present->left != NULL || present->right != NULL)))
			return (0);

		if (present->left != NULL)
			queue[back++] = present->left;

		if (present->right != NULL)
			queue[back++] = present->right;

		if (present->left == NULL || present->right == NULL)
			flag = 1;
	}

	return (1);
}

