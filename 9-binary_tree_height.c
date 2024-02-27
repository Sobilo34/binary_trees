#include "binary_trees.h"

/**
 * binary_tree_height - A function that measures the height of a binary tree
 * @node: The pointer to the node to check
 * Return: The 1 if the node is a leaf node and 0 if not
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_edge, right_edge;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0); /* Return 0 if tree is NULL*/

	/* Calculate the height of left and right edges recursively*/
	left_edge = binary_tree_height(tree->left);
	right_edge = binary_tree_height(tree->right);

	if (left_edge < right_edge)
	{
		return (1 + left_edge); /*height of left edge*/
	}

	return (1 + right_edge); /* height of right edge*/
}
