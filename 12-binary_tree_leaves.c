#include "binary_trees.h"

/**
 * binary_tree_leaves - A function that counts the leaves in a binary tree
 *
 * @tree: pointer to node
 * Return: count of leaves in binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (leaves);

	if (tree->left == NULL && tree->right == NULL)
		leaves += 1;

	leaves += binary_tree_leaves(tree->right);
	leaves += binary_tree_leaves(tree->left);

	return (leaves);
}
