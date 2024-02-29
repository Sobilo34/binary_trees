#include "binary_trees.h"

/**
 * binary_tree_uncle - Checks Uncle node in a binary tree
 *
 * @node: The pointer to node to find the uncle
 * Return: A pointer to the node with uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;
	binary_tree_t *granpa = parent->parent;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (granpa->left == parent)
		return (granpa->right);
	else
		return (granpa->left);
}
