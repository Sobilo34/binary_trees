#include "binary_trees.h"

/**
 * binary_height - A function that measures the height of a binary tree
 * @tree: The pointer to the root node
 * Return: The 1 if the node is a leaf node and 0 if not
 */

size_t binary_height(const binary_tree_t *tree)
{
	int left_edge, right_edge;

	if (tree == NULL)
		return (-1);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_edge = binary_height(tree->left) + 1;
	right_edge = binary_height(tree->right) + 1;

	if (left_edge > right_edge)
		return (left_edge);
	else
		return (right_edge);
}

/**
 * binary_tree_balance - Calculates the balance factor of a binary tree
 * @tree: The root node of the binary tree
 * Return: The balnce factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_edge, right_edge, bal_factor;

	if (tree == NULL)
		return (0); /* Do nothing if there's no root node*/

	left_edge = binary_height(tree->left);
	right_edge = binary_height(tree->right);
	bal_factor = (left_edge - right_edge);

	return (bal_factor);
}
