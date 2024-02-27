#include "binary_trees.h"

/**
 * binary_tree_insert_right - A function that deletes an entire binary tree
 * @tree: The pointer to the root node of the tree to delete
 * Return: The tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free (tree);
}

