#include "binary_trees.h"

/**
 * binary_tree_inorder - A function that goes through an binary
 * tree using in-order traversal
 *
 * @tree:  A ponter to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node.
 * Return : Void(nothing)
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL || func == NULL)
		return; /*Do nothing if tree or func is NULL*/

	/* Recusive traverse with in-order orientation */
	binary_tree_inorder(tree->left, func); /*The left node first*/
	func(tree->n); /*Then Parent node*/
	binary_tree_inorder(tree->right, func); /*Then right node*/
}
