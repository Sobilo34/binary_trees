#include "binary_trees.h"

/**
 * avl_insert - Function that inserts a value in an AVL Tree.
 * @tree: Double pointer to root node of AVL tree for inserting the value.
 * @value: The value to store in the node to be inserted.
 *
 * Return: A pointer to the created node, or NULL for fail
 */

avl_t *avl_insert(avl_t **tree, int value)
{
	avl_t *present, *parent, *node;

	if (!tree)
		return (NULL);

	present = *tree;
	parent = NULL;

	while (present)
	{
		parent = present;
		if (value == present->n)
			return (NULL);
		if (value < present->n)
			present = present->left;
		else
			present = present->right;
	}

	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);

	if (!parent)
		*tree = node;
	else if (value < parent->n)
		parent->left = node;
	else
		parent->right = node;

	return (node);
}

