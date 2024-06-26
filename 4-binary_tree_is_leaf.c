#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: pointer to the node to be checked
 * Return: 1 or 0 as the case may be
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	binary_tree_is_leaf(node->left);
	binary_tree_is_leaf(node->right);

	return (0);
}
