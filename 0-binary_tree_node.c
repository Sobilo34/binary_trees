# include "binary_trees.h"

/**
 * binary_tree_node - creates binary tree nodes
 *
 * @parent: Pointer to the parent node
 * @value: Integer value for element n
 * Return: Pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->n = value;
	node->left = NULL;
	node->right = NULL;

	if (parent == NULL)
		return (node);

	return (node);
}
