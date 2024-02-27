#include "binary_trees.h"

/**
 * binary_tree_preorder - A function that goes through a
 * binary tree using pre-order traversal
 *
 * @tree:  A ponter to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node.
 * Return : Void(nothing)
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL || func == NULL)
		return; /*Do nothing if tree or func is NULL*/

	/* Recusive traverse with Pre-order orientation */
	func(tree->n); /*Parent node first*/
	binary_tree_preorder(tree->left, func); /*Then left node*/
	binary_tree_preorder(tree->right, func); /*Then right node*/
}
