#include "binary_trees.h"

/**
 * binary_tree_uncle - Checks Uncle node in a binary tree
 *
 * @node: The pointer to node to find the uncle
 * Return: A pointer to the node with uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *granpa;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	parent = node->parent;
	granpa = parent->parent;

	if (granpa->left == parent)
		return (granpa->right);
	else
		return (granpa->left);
}
