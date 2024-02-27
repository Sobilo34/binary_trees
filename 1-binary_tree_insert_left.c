# include "binary_trees.h"

/**
 * binary_tree_insert_left - creates binary tree node in left node of parent
 *
 * Description: If parent already has a left-child, the new node must take
 * its place, and the old left-child must be set as the left-child of the
 * new node.
 *
 * @parent: Pointer to the parent node
 * @value: Integer value for element n
 * Return: Pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *temp = NULL;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		temp = parent->left;
		temp->parent = node;
	}

	node->n = value;
	node->parent = parent;
	node->left = temp;
	node->right = NULL;

	parent->left = node;

	return (node);
}
