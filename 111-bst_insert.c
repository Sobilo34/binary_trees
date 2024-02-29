#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a Binary Search Tree (BST).
 * @tree: A double pointer to the root node of the BST to insert the value.
 * @value: The value to store in the node to be inserted.
 *
 * Return: A pointer to the created node, or NULL on failure.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *node, *present, *parent;

	if (tree == NULL)
		return (NULL);

	parent = NULL;
	present = *tree;

	while (present != NULL)
	{
		parent = present;
		if (value < present->n)
			present = present->left;

		else if (value > present->n)
			present = present->right;

		else
			return (NULL);
	}

	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);

	if (parent == NULL)
		*tree = node;

	else if (value < parent->n)
		parent->left = node;

	else
		parent->right = node;

	return (node);
}

