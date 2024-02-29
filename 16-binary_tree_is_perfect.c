#include "binary_trees.h"

size_t binary_tree_help_perfect(const binary_tree_t *tree, int *is_perfect);

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 * Return: 1 if perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_edge, right_edge;
	int is_perfect_right, is_perfect_left;

	if (tree == NULL)
		return (0);

	left_edge = binary_tree_help_perfect(
			tree->left, &is_perfect_left);
	right_edge = binary_tree_help_perfect(
			tree->right, &is_perfect_right);

	if (left_edge == right_edge && is_perfect_right && is_perfect_left)
		return (1);

	return (0);
}

/**
 * binary_tree_help_perfect - An helper function to checks
 * if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 * @is_perfect: Pointer to a variable to store
 * whether the tree is perfect or not
 * Return: The height of the tree
 */

size_t binary_tree_help_perfect(const binary_tree_t *tree, int *is_perfect)
{
	size_t left_height, right_height;
	int left_perfect = 0, right_perfect = 0;

	if (tree == NULL)
	{
		*is_perfect = 1;
		return (0);
	}

	left_height = binary_tree_help_perfect(tree->left, &left_perfect);
	right_height = binary_tree_help_perfect(tree->right, &right_perfect);

	if (left_height == right_height && left_perfect && right_perfect)
		*is_perfect = 1;
	else
		*is_perfect = 0;

	return (1 + (left_height > right_height ? left_height : right_height));
}
