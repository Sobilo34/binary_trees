#include "binary_trees.h"

/**
 * array_to_avl - function that builds an AVL tree from an array.
 * @array: Pointer to the first element of the array to be converted.
 * @size: The number of elements in the array.
 *
 * Return: A pointer to root node of created AVL tree, or NULL if fails
 */

avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *root = NULL;
	size_t a;

	for (a = 0; a < size; a++)
	{
		if ((avl_insert(&root, array[a])) == NULL)
		{
			return (NULL);
		}
	}

	return (root);
}

