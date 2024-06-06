#include "binary_trees.h"
#include <sys/param.h>

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: Height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0, max_height = 0;

	if (tree == NULL)
                return (0);
	if (tree->left != NULL)
	{
		left_height = binary_tree_height(tree->left) + 1;
	}
	if (tree->right != NULL)
		right_height = binary_tree_height(tree->right) + 1;
	max_height = MAX(left_height, right_height);
	return max_height;

}
