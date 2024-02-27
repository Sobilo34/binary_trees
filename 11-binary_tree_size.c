#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of the binary tree
 *
 * @tree: pointer to a node
 * Return: size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes;

	/* if node is empty*/
	if (tree == NULL)
		return (0);

	/* if both the right and left child node of a node is NULL*/
	if (tree->left == NULL && tree->right == NULL)
		return (1); /* node is leaf node*/

	/* recursively transverse the edge nodes and count them*/
	left_nodes = binary_tree_size(tree->left);
	right_nodes = binary_tree_size(tree->right);

	/* finally return the count of child nodes plus present node*/
	return (1 + left_nodes + right_nodes);
}
