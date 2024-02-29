#include "binary_trees.h"

/**
 * binary_tree_nodes - A function that counts the
 * nodes with at least 1 child in a binary tree
 *
 * @tree: pointer to the root node
 * Return: node with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (nodes);

	/* Check if node has atleast 1 chiild */
	if (tree->right != NULL || tree->left != NULL)
		nodes += 1;

	/* Recursively count left and rigt edges */
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}
