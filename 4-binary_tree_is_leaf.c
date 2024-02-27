#include "binary_trees.h"

/**
 * binary_tree_is_leaf - A function that checked if node is a leaf node
 * @node: The pointer to the node to check
 * Return: The 1 if the node is a leaf node and 0 if not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0); /* Return 0 if node is NULL*/

	if (node->right == NULL && node->left == NULL)
	{
		return (1); /* Return 1 if its a leaf node*/
	}

	return (0); /* Return 0 if not a leaf node */
}
