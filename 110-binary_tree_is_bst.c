#include "binary_trees.h"

int is_valid(const binary_tree_t *tree, const binary_tree_t *min,
		const binary_tree_t *max);

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid Binary Search Tree.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is a valid BST, 0 otherwise.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (is_valid(tree, NULL, NULL));
}

/**
 * is_valid - Check if a binary tree is a valid BST
 * @tree: A pointer to the root node of the tree to check.
 * @min: The minimum allowed value for nodes in the subtree.
 * @max: The maximum allowed value for nodes in the subtree.
 *
 * Return: 1 if the subtree is a valid BST, 0 otherwise.
 */
int is_valid(const binary_tree_t *tree, const binary_tree_t *min,
		const binary_tree_t *max)
{
	if (tree == NULL)
		return (1);

	if ((min && tree->n <= min->n) || (max && tree->n >= max->n))
		return (0);

	return (is_valid(tree->left, min, tree) && is_valid(tree->right, tree, max));
}

