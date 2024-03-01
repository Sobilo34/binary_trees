#include "binary_trees.h"

/**
 * array_to_bst - Function that builds a Binary Search Tree from an array
 * @array: A pointer to the first element of the array to be converted.
 * @size: The number of elements in the array.
 *
 * Return: A pointer to the root node of the created BST, or NULL on failure.
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t a;

	if (!array || size == 0)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		if (bst_insert(&root, array[a]) == NULL)
		{
			return (NULL);
		}
	}

	return (root);
}
