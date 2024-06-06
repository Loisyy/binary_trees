#include "binary_trees.h"
#include <sys/param.h>

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: Height of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size = 0, right_size = 0, size = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
	{
		left_size = binary_tree_size(tree->left);
	}
	if (tree->right != NULL)
		right_size = binary_tree_size(tree->right);
	size = left_size + right_size + 1;
	return (size);

}
