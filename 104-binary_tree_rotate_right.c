#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs a right-rotation on a binary tree.
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node of the tree once rotated.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_node;

	if (tree == NULL || tree->left == NULL)
		return (NULL);

	new_node = tree->left;
	tree->left = new_node->right;

	if (new_node->right != NULL)
		new_node->right->parent = tree;

	new_node->parent = tree->parent;
	tree->parent = new_node;
	new_node->right = tree;

	return (new_node);
}

