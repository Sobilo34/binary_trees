#include "binary_trees.h"

/**
 * binary_tree_rotate_left - A function that performs a left-rotation on a binary tree.
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node of the tree once rotated.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_node;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	new_node = tree->right;
	tree->right = new_node->left;

	if (new_node->left)
		new_node->left->parent = tree;

	new_node->parent = tree->parent;
	tree->parent = new_node;
	new_node->left = tree;

	return (new_node);
}

