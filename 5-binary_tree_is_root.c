#include "binary_trees.h"

/**
 * binary_tree_is_root - A function that checks if a given node is a root
 * @node: The pointer to the node to check
 * Return: The 1 if the node a a root node and 0 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0); /* Return 0 if node is NULL*/

	if (node != NULL && !node->parent)
	{
		return (1); /* Return 1 if there's a node and not parent node*/
	}

	return (0); /* Return 0 if otherwise */
}
