#include "binary_trees.h"

int binary_tree_help_avl(const binary_tree_t *tree, int *height);
int binary_tree_is_bst(const binary_tree_t *tree);


/**
 * binary_tree_is_avl - Checks if a binary tree is a valid AVL Tree.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is a valid AVL Tree, 0 otherwise.
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	int height = 0;
	if (tree == NULL)
		return (0);
	
	return (binary_tree_is_bst(tree) && binary_tree_help_avl(tree, &height));
}

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	if ((tree->left && tree->left->n > tree->n) ||
			(tree->right && tree->right->n < tree->n))
		return (0);

	return (binary_tree_is_bst(tree->left) && binary_tree_is_bst(tree->right));
}

/**
 * binary_tree_help_avl - A helper function for binary_tree_is_avl
 * @tree: A pointer to the root node of the tree to check.
 * @height: Pointer to the height of the tree.
 *
 * Return: 1 if the tree is a valid AVL Tree, 0 otherwise.
 */

int binary_tree_help_avl(const binary_tree_t *tree, int *height)
{
	int left_height = 0, right_height = 0;
	int left_avl = 0, right_avl = 0;

	if (tree == NULL)
	{
		*height = 0;
		return (1);
	}

	left_avl = binary_tree_help_avl(tree->left, &left_height);
	right_avl = binary_tree_help_avl(tree->right, &right_height);

	*height = 1 + ((left_height > right_height) ? left_height : right_height);

	if (left_avl && right_avl &&
			abs(left_height - right_height) <= 1 &&
			binary_tree_is_bst(tree))
	{
		return (1);
	}

	return (0);
}
