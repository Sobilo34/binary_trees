#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks is a binary tree is a full Binary tree
 *
 * @tree: pointer to the root node
 * Return: 1 if the binary tree is full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	else if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	else
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
