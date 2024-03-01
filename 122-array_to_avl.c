#include "binary_trees.h"

/**
 * array_to_avl - Builds an AVL tree from an array.
 * @array: Pointer to the first element of the array to be converted.
 * @size: The number of elements in the array.
 *
 * Return: A pointer to root node of created AVL tree, or NULL on failure.
 */

avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *root = NULL;
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (!avl_insert(&root, array[i]))
		{
			return (NULL);
		}
	}

	return (root);
}
